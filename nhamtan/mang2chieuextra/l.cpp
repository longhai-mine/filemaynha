#include <bits/stdc++.h>

using namespace std;

int n, m;
char a[505][505];

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen(".inp", "r", stdin);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    long long s = 0;
    for(int i = 1; i + 1 <= n; i++) {
        for(int j = 1; j + 1 <= m; j++) {
            int temp = (int)a[i][j] + (int)a[i + 1][j] + (int)a[i][j + 1] + (int)a[i + 1][j + 1];
                cout << temp << " ";
            }
            cout << endl;
        }
    cout << s;
    return 0;
}
