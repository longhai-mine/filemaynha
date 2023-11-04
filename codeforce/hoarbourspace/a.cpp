#include <bits/stdc++.h>

using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        bool check = false;
        int a[n + 5];
        a[1] = x;
        a[n] = y;
        for(int i = 1; i <= (y - x - 1); i++)
        {
            int temp = ((n - 3 + i) * (n - 2 + i) / 2) - (i * (i - 1) / 2);
            if(y - temp < temp - x)
            {
                check = true;
                for(int j = n - 1; j > 1; j--)
                {
                    a[j] = y - i;
                    i++;
                }
                break;
                cout << temp;
                break;
            }
        }
        if(check)
        {
            for(int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << - 1 << "\n";
        }
    }
    return 0;
}
