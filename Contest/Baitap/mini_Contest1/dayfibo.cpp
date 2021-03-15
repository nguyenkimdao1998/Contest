#include<iostream>

using namespace std;
int fibonaci(int i) {
	if (i==0) return 0;
	if (i==1) return 1;
	return fibonaci(i-1) + fibonaci (i-2);
}
 
int main() {
 	int n, i;
	cin >> n;
    for (i = 0; i < n; i++) {
        cout << fibonaci(i);
        cout << " ";
    }   
}
