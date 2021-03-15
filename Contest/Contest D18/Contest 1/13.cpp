#include<bits/stdc++.h>

using namespace std;
int n, k;
vector<string> a;
bool check(string str){
	int dem = 0;
	int d = 0;
	for(int i = 0;i<n;i++){
		if(str[i]=='A'){
			dem++;
		}else{
			dem = 0;
		}
		if(dem>k){
			return false;
		}
		if(dem == k){
			d++;
		}
	}
	if(d==1){
		return true;
	}
	return false;
}

void quayLui(int i, string str){
	if(i==n){
		if(check(str)){
			a.push_back(str);
		}
	}else{
		str.push_back('A'); quayLui(i+1, str); str.erase(str.length()-1);
		str.push_back('B'); quayLui(i+1, str); str.erase(str.length()-1);
	}
}

int main(){
	cin>>n>>k;
	a.clear();
	quayLui(0,"");
	cout<<a.size()<<endl;
	for(int i = 0;i<a.size();i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
