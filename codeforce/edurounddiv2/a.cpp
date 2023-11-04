#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair <int, int> a[n + 10];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        int ans = a[1].first;
        for(int i = 2; i <= n; i++)
        {
            if(a[1].first <= a[i].first && a[1].second <= a[i].second)
                ans = -1;
        }
        cout << ans << "\n";
    }
}