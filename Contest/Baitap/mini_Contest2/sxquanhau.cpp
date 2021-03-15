#include<bits/stdc++.h>

using namespace std;
int n, dem = 0;
bool cot[1000], xuoi[1000], nguoc[1000];
void quanhau(int i){
	for(int j = 1; j<=n; j++){
		if(cot[j] == false && xuoi[i-j+n] == false && nguoc[i+j-1] == false){
			cot[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
			if(i == n){
				dem ++;
			}else{
				quanhau(i+1);
			}
			cot[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
		}
	}
}

int main(){
	cin>>n;
	dem = 0;
	quanhau(1);
	cout<<dem<<endl;
	return 0;
}
