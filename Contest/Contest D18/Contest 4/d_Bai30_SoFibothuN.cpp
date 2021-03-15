/*BAI 30: SO FIBONACI THU N*/

#include<iostream>

using namespace std;
long long M=1e9+7;
struct Matrix{
	long long c[2][2];
	Matrix(){
		c[0][0] = 0;
		c[0][1] = 1;
		c[1][0] = 1;
		c[1][1] = 1;
	}
};

Matrix operator * (Matrix a, Matrix b){
	Matrix r;
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			r.c[i][j] = 0;
			for(int k=0; k<=1; k++)
				r.c[i][j] = (r.c[i][j]+a.c[i][k]*b.c[k][j])%M;
		}
	}
	return r;
}

Matrix powermod (Matrix a, long long n){
    if (n==1) return a;
    if (n%2!=0) return powermod(a,n-1)*a;
    Matrix tmp = powermod(a,n/2);
    return tmp*tmp;
}

int main(){
	int t;
	long long f[100000];
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		Matrix A;
		A = powermod(A,n);
		cout << A.c[0][1] <<endl;
	}	
}
