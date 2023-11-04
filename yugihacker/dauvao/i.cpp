#include <bits/stdc++.h>
using namespace std;
int n;
int a[105][105];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int h1 = 1, h2 = n, c1 = 1, c2 = n, cnt = 1;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1; i <= c2; ++i)
        {
            a[h1][i] = cnt;
            ++cnt;
        }
        ++h1;
        for(int i = h1; i <= h2; ++i)
        {
            a[i][c2] = cnt;
            ++cnt;
        }
        --c2;
        if(c2 >= c1)
        {
            for(int i = c2; i >= c1; --i)
            {
                a[h2][i] = cnt;
                ++cnt;
            }
        }
        --h2;
        if(h2 >= h1)
        {
            for(int i = h2; i >= h1; --i)
            {
                a[i][c1] = cnt;
                ++cnt;
            }
        }
        ++c1;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
