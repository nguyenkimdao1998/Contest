#include<bits/stdc++.h>

using namespace std;

int partition(int a[], int l, int h){
    int pivot = a[h];
    int le = l;
    int ri = h - 1;
    while(true){
        while(le <= ri && a[le] < pivot) le++;
        while(ri >= le && a[ri] > pivot) ri--;
        if (le >= ri) break;
        swap(a[le], a[ri]);
        le++;
        ri--;
    }
    swap(a[le], a[h]);
    return le;
}
void quickSort(int a[], int l, int h){
    if (l < h){
        int pi = partition(a, l, h);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, h);
    }
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		quickSort(a,0,n-1);
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
