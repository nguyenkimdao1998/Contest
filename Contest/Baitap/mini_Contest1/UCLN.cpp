#include<iostream>

using namespace std;
int USCLN(int m, int n){
	if (n==0) return m;
	else return USCLN(n, m % n);
}
int main() {
 	int n, m;
	cin >> n >> m;
    cout << USCLN(m,n);
    cout << " ";  
}
