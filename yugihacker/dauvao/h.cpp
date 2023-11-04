#include <bits/stdc++.h>
using namespace std;
int n, l, r;
int a[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    a[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[i] = x + a[i - 1];
    }
    int t;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << "\n";
    }
}

