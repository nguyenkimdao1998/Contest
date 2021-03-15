#include <iostream>
using namespace std;
int giaiThua(int n)
{
    if (n==1 || n==0)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << giaiThua(n);
    return 0;
}
