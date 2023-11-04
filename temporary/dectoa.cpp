#include <bits/stdc++.h>
using namespace std;
int s;
int a;
void solve(int n, int x)
{
    string ans;
    int dem = 1;
    while(n > 0)
    {
        int y = n % x;
        n /= x;
        ans = to_string(y) + ans;
    }
    cout << ans;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("dectoa.inp", "r", stdin);
    freopen("dectoa.out", "w", stdout);
    cin >> s >> a;
    solve(s, a);
}
