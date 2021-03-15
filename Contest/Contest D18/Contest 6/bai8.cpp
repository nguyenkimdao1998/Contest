#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int dema[1001];
int demb[1001];
ll pow(ll a, ll b)
{
	if (b == 0) return 1;
	if (b == 1) return a;
	ll x = pow(a,b/2);
	if (b%2) return x*x*a;
	return x*x;
}

int main(){
    
	int test;
    cin>> test;
	while (test--)
	{
		int ans = 0;
		int n,m;
		cin >> n >> m;
		for (int i = 0; i < n ; i++)
		{
			int x;
			cin >> x;
			dema[x] ++;
		}
        
		for (int i = 0; i < m; i++)
		{
			int y;
			cin >> y;
			demb[y] ++;
		}
        
		for (int i = 0; i <= 1000; i++)
		{
			if (dema[i])
			{
				for (int j = 0; j <= 1000; j++)
				{
					if (demb[j])
					{
						if (pow(i,j) > pow(j,i)) ans += dema[i]*demb[j];
					}
				}
			}
		}
		cout << ans << endl;
	}
}

