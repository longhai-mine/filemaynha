#include <bits/stdc++.h>
using namespace std;

int a[300][300];
int n, q;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        char x;
        cin >> x;
        a[(int)x - 'a' + 1][i]++;
    }
    for(int i = 'a' + 1; i <= 'z' - 'a' + 1; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            a[i][j] += a[i][j - 1];
        }
    }
    for(int i = 'a' + 1; i <= 'z' - 'a' + 1; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
