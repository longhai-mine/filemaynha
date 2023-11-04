#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = (int)1e9 + 7;
map <int, int> f;
int n;
int lt(int x, int y)
{
    int res = 1;
    for(int i = 1; i <= y; i++)
        res *= x;
    return res;
}
vector <int> prime;
void snt()
{
    for(int i = 2; i <= sqrt(1e9); i++)
    {
        bool ok = true;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                ok = false;
                break;
            }
        }
        if(ok)
            prime.push_back(i);
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    snt();
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        for(int j = 0; j < prime.size() && prime[j] * prime[j] <= x; j++)
        {
            if(x % prime[j] == 0)
            {
                int dem = 0;
                while(x % prime[j] == 0)
                {
                    dem++;
                    x /= prime[j];
                }
                f[prime[j]] = max(f[prime[j]], dem);
            }
        }
        if(x > 1)
            f[x] = max(f[x], 1LL);
    }
    int ans = 1;
    for(auto it = f.begin(); it != f.end(); it++)
    {
        ans = (ans * lt(it -> first, it -> second)) % mod;
    }
    cout << ans;
}
