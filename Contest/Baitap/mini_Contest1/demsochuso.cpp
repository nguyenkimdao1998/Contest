#include<iostream>

using namespace std;

int demSoChuSo(int n){
    if(n>=0 && n<=9) return 1;
    else 
    return (demSoChuSo(n/10)+1);  
}

int main(){	
	int n;
    cin >> n;
    cout << demSoChuSo(n);    
}
