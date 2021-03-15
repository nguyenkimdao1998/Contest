/*BAI 26: HE CO SO K*/

#include<iostream>

using namespace std;
int main(){
	int k;
	string a,b,x;
	cin >> k >> a >> b;
	while (a.size() < b.size()) a = '0' + a;
	while (a.size() > b.size()) b = '0' + b;
	long long s1 = 0,s2 = 0,s = 0;
	for(int i = 0;i < a.size();i++){
        s1 = s1 * k + a[i] - 48;
        s2 = s2 * k + b[i] - 48;
	}
	s = s1 + s2;
	while (s > 0){
        x = char(s % k + 48) + x;
        s = s / k;
	}
	cout << x;
	return 0;
}
