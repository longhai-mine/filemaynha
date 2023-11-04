// iterator tra ve it.begin() -> khong co thang nao nho hon t
// iterator tra ve it.end() -> t la lon nhat lay h lon nhat
#include <bits/stdc++.h>
using namespace std;
int n, m, h, t;
multiset <int> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int i = 1; i <= m; i++)
    {
        int t;
        cin >> t;
        auto it = a.upper_bound(t);
        if(it == a.begin())
            cout << -1 << "\n";
        else
        {
            cout << *(--it) << "\n";
            a.erase(it);
        }
    }
}
