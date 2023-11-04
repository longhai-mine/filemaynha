#include <bits/stdc++.h>
using namespace std;
int a[10][10];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 1; i <= 5; ++i)
        for(int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];

        }
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if(a[i][j] == 1)
            {
                int ans = abs(i - 3) + abs(j - 3);
                cout << ans;
                return 0;
            }
        }
    }
}
