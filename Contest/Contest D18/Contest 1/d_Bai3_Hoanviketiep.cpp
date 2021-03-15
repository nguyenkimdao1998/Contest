/*BÀI 3. HOAN VI KE TIEP*/

#include<iostream>
bool check;
using namespace std;

void Xuly(int n, int x[]){
	check = false;
	int j=n-1;
	while(j>0 && x[j]>x[j+1]) j--;
	if(j>0){
		int k=n;
		while(x[j] > x[k]) k--;
		swap(x[j],x[k]);
		int r=j+1, s=n;
		while(r<=s){
			swap(x[r],x[s]);
			r++;
			s--;
		}
		check = true;
	}
	if(check == true)
		for(int i=1; i<=n; i++){
			cout << x[i] << " ";
		}
	else
		for(int i=1; i<=n; i++)
			cout << i << " ";
		cout << endl;
	}

int main(){
 	int t, n, x[1000];
 	cin >> t;
 	while(t--){
 		cin >> n;
 		for(int i=1; i<=n; i++){
 			cin >> x[i];
 		 }
 		 Xuly(n,x);
	 }
 }
