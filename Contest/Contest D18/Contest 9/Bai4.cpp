#include<bits/stdc++.h>

using namespace std;
int d[1005][1005];
int main(){
	int n;
	string s;
	cin >> n;
	cin.ignore();
	
	vector<int> ke[1005];
	for(int i=1; i<=n; i++){
		getline(cin,s);
		s += " ";
		
		int val=0;
		int j=0;
		while(j<s.size()){
			if(s[j]>='0' && s[j]<='9')
				val = val*10 + (int)(s[j]-'0');
			if(val>0){
				ke[i].push_back(val);
				val = 0;
			}
			j++;
		}
	}

	memset(d,0,sizeof(d));
	for(int i=1; i<=n; i++){
		for(int j=0; j<ke[i].size(); j++){
			d[i][ke[i][j]] = d[ke[i][j]][i] = 1;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
}

