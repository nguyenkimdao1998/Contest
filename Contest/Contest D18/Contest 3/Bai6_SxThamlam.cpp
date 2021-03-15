/* BAI 6: SAP XEP THAM LAM*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int test,n,a[100000],b[100000],OK;
main(){
	cin>>test;
	while(test--){
		cin>>n;
		OK=true;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		for(int i=1;i<=n;i++){
			if(a[i] != b[i] && a[i] != b[n-i+1]){
				cout<<"No"<<endl;
				OK=false;
				break;
			}
		}
		if(OK)	cout<<"Yes"<<endl;
	}
}

