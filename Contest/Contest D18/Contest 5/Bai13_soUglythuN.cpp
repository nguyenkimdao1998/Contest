// BAI 13: SO UGLY THU N

#include<bits\stdc++.h> 
 
using namespace std;

int maxDivide(int a, int b) { 
	while (a%b == 0) 
	a = a/b; 
	return a; 
}	 
int checkUgly(int x){ 
	x = maxDivide(x, 2); 
	x = maxDivide(x, 3); 
	x = maxDivide(x, 5); 	
	if(x==1) return 1;
	return 0;
}	 
int getUgly(int n){ 
	int i = 1; 
	int d = 1; 
	while (n > d){ 
		i++;	 
		if (checkUgly(i)) d++; 
	} 
	return i; 
}
int main() { 
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		cout << getUgly(n) << endl;
	}	
} 

