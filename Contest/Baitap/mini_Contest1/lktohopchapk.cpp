#include <iostream>

using namespace std;
int X[100], n, k;
void Try(int i){
	for (int j=X[i-1]+1; j<=n-k+i; j++){ 
		X[i]=j; 
		if(i==k){
			for(int i=1; i<=k; i++) 
			cout << X[i];
			cout << " ";
		}	 
		else 
			Try(i+1); 
	}
}

int main(void){	
	cin >> n >> k;
	X[0] = 0 ; 
	Try(1);
}
