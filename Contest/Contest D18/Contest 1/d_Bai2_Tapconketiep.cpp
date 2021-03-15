/*Bai 2: Tap con ke tiep*/

#include<iostream>

using namespace std;
bool check;
void Xuly(int x[],int k,int n){
	check = false;
	int i=k;
	while(i>0 && x[i]==n-k+i) i--;
	if(i>0){
		x[i]++;
		for(int j=i+1; j<=k; j++)
			x[j] = x[i] + j - i;
		check = true;
	}
	if(check == true)
		for(int i=1; i<=k; i++)
			cout << x[i] << " ";
	else
		for(int i=1; i<=k; i++)
			cout << i << " ";
	cout << endl;
}

int main(){
	int t, n, k, x[1000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=k; i++){
			cin >> x[i];
		}
		Xuly(x,k,n);
	}
}
