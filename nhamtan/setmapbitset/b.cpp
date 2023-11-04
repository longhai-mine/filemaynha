#include<bits/stdc++.h>
using namespace std;
map <int, int> cnt, a;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, ans = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int r = 1; r <= n; r++)
    {
        ans += cnt[k - a[r]];
        //cout << k - a[r] << " " << cnt[k - a[r]] << endl;
        cnt[a[r]]++;
    }
    cout << ans;
}