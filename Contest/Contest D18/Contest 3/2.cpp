#include<bits/stdc++.h>
using namespace std;
int checkMin(int k){
	int res = 0;
	int i = 0;
	while(k>0){
		int d;
		d = k%10;
		if(d==6){
			d = 5;
		}
		res+= d*pow(10,i);
		k/=10;
		i++;
	}
	return res;
}
int checkMax(int k){
	int res = 0;
	int i = 0;
	while(k>0){
		int d;
		d = k%10;
		if(d==5){
			d = 6;
		}
		res+= d*pow(10,i);
		k/=10;
		i++;
	}
	return res;
}
int main(){
		int a, b;
		cin >> a >> b;
		cout << checkMin(a) + checkMin (b) << " " << checkMax(a) + checkMax(b);
}
