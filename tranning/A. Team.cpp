#include <bits/stdc++.h>
using namespace std;
int t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    int ans = 0;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2)
            ans++;
    }
    cout << ans;
}

