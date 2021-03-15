/* BAI 2: NHAM CHU SO*/

#include<iostream>
#include<math.h>

using namespace std;

int dem(int n){
	int d=0;
	while(n>0){
		d++;
		n/=10;
	}
	return d;
}

long checkMin(int n){
	int x;
	x = dem(n);
	int i = x, s = 0;
	while(n){
		if(n%10==6){
			s +=5*pow(10,x-i);
		}
		else{
			s+=(n%10)*pow(10,x-i);
		}
		i--;
		n/=10;
	}
	return s;
}

long checkMax(int n){
	int x;
	x = dem(n);
	int i = x, s = 0;
	while(n){
		if(n%10==5){
			s +=6*pow(10,x-i);
		}
		else{
			s+=(n%10)*pow(10,x-i);
		}
		i--;
		n/=10;
	}
	return s;
}

int main(){
	long a,b;
	cin >> a >> b;
	cout << checkMin(a) + checkMin(b) << " " << checkMax(a) + checkMax(b);
}

