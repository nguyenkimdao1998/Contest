#include <iostream>

#define MAX 100
using namespace std;
int X[MAX], n;
bool chuaxet[MAX];

void Try(int i){ 
	for (int j=1; j<=n; j++){ 
		if(chuaxet[j]){ 
			X[i]=j; 
			chuaxet[j]=false; 
		if(i==n){
			for(int i =1; i<=n; i++)
				cout<<X[i];
				cout << " ";
		} 
		
		else 
			Try(i+1); 
			chuaxet[j]=true; 
		}
	}
}
int main(void){
	cin>>n;
	for(int i=1; i<=n; i++)
	chuaxet[i]=true;
	Try(1);
}
