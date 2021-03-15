#include<bits/stdc++.h>

using namespace std;
long long a[16];
bool ans;
void khoiTao(){
	for(int i = 0;i<16;i++){
		a[i]=0;
	}
}
void sinh(){
	int i = 15;
	while(i>=0 && a[i]==9){
		a[i]=0;
		i--;
	}
	if(i>=0){
		a[i]=9;
	}else{
		ans = false;
	}
}
long long tong(){
	long long t = 0;
	for(int i = 0;i<16;i++){
		t = t*10+a[i];
	}
	return t;
}
void hienThi(int n){
	if(tong()%n==0){
		cout<<tong()<<endl;
		ans = false;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ans = true;
		khoiTao();
		while(ans){
			sinh();
			hienThi(n);
		}
	}
	return 0;
}
