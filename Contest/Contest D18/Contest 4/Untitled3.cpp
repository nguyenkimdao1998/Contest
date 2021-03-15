#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin >> n;
	int a[n+1];
	int L[n+1]; // Mang luu do dai tot nhat tai thoi diem i
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	L[0] = 1; // Do dai tot nhat luon la 1 do co 1 phn tu
	int lmax; // Luu gia tri tot nhat tu dau den phan tu thu i
	// Quy hoach dong : 
	
	/* Chi so : 0 1 2 3 4 5
	   A      : 1 2 5 4 6 2
	   L      : 1 2 3 3 4 2
	   Y tuong : L[i] = lmax + 1; voi lmax la max  tu 0-> i-1 dong thoi A[vi tri co lmax] < A[i]
	*/
    for(int i = 1; i < n; i++){ // duyet mang a tu 1 do da gan L[0] tuc la da xet i = 0
    	lmax = 0;
    	for(int j = 0; j < i; j++){
    		if(a[i] > a[j]){
    			if(lmax < L[j]) lmax = L[j];
			}
		}
		L[i] = lmax + 1;
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		if(max < L[i]) max = L[i];
	}
	cout << max;
    return 0;
}
