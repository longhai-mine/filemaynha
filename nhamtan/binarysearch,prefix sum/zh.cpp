#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, ans;
int a[(int)1e5 + 10], b[(int)1e5 + 10], c[(int)1e5 + 10];

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
    	cin >> a[i];
    	b[i] = max(b[i - 1], a[i]);
    }
    for(int i = n; i >= 1; i--)
    	c[i] = max(c[i + 1], a[i]);
    for(int i = 1; i <= n; i++)
    {
    	int curwater = max(min(b[i], c[i]) - a[i], 0LL);
    	ans += curwater;
    }
    cout << ans;
}

1 -> 2 -> 3 -> 4
