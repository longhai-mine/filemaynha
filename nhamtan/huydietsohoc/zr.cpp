#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9 + 7;
int prime[1000005];
void snt()
{
    for(int i = 1; i <= 1e6; i++)
        prime[i] = 1;
    for(int i = 2; i * i <= 1e6; i++)
        if(prime[i])
            for(int j = i * i; j <= 1e6; j += i)
                prime[j] = 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    snt();
    int n;
    cin >> n;
    long long ans = 1;
    for(int i = 2; i <= n; i++)
    {
        if(prime[i])
        {
            long long p = i;
            while(p * i <= n)
            {
                p *= i;
            }
            ans = (ans * p) % MOD;
        }
    }
    cout << ans;
}
