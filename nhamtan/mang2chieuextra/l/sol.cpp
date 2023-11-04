#include <bits/stdc++.h>

using namespace std;

const int mod = (int)1e9 + 7;
#define y1 bien1
#define int long long
int n, m;
int x1, y1, u1, v1, x2, y2, u2, v2;

int tong(int x)
{
    return (x * (x + 1) / 2);
}

int val(int a1, int b1, int a2, int b2)
{
    return (((tong(a2) - tong(a1 - 1)) % mod) * ((tong(b2) - tong(b1 - 1)) % mod) % mod);
}

int phangiao()
{
    int traitren1 = max(x1, x2);
    int traitren2 = max(y1, y2);
    int phaiduoi1 = min(u1, u2);
    int phaiduoi2 = min(v1, v2);
    if(traitren1 <= phaiduoi1 && traitren2 <= phaiduoi2)
    {
        return val(traitren1, traitren2, phaiduoi1, phaiduoi2);
    }
    else
    {
        return 0;
    }
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    cin >> x1 >> y1 >> u1 >> v1;
    cin >> x2 >> y2 >> u2 >> v2;

   /* cout << phangiao() << endl;
    cout << val(x1, y1, u1, v1) << " " << val(x2, y2, u2, v2) << endl;
    cout << val(1, 1, n, m) << endl; */
    int ans = val(1, 1, n, m);
    ans = ((ans - val(x1, y1, u1, v1) - val(x2, y2, u2, v2) + phangiao()) % mod + mod) % mod;
    cout << ans;
    return 0;
}
