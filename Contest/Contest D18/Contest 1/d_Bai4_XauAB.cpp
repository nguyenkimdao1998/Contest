/*Bai4: XAU AB CÓ ÐO DAI N*/

#include<iostream>

using namespace std;
bool check = true;
void Sinh(int n, char s[]){
	int i = n;
	while(i>0 && s[i]!='A'){
		s[i]='A';
		i--;
	}
	if(i>0) s[i]='B';
	else check = false;
}
	
int main(){
	int t, n;
	char s[100];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			s[i] = 'A';
		}
		while(check){
			for(int i=1; i<=n; i++){
				cout << s[i];
			}
				cout << " ";
			Sinh(n,s);
		}
		check = true;
		cout << endl;	
	}	
}
