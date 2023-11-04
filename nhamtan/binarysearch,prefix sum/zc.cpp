#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, ans;
int a[(int)1e5 + 10], sum[(int)1e5 + 10];

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
    	cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    // for(int i = 1; i <= n; i++)
    //     cout << a[i] << " ";
    // cout << endl;
    sort(a + 1, a + n + 1);
    for(int i = n; i > 1; i--)
    {
        int s = sum[n] - sum[i - 1];
        int need = a[i - 1] * (i - 1) - sum[i - 1];
        if(s >= need)
        {
            cout << n - i + 1;
            return 0;
        }
    }
    cout << 0;
    // for(int i = n; i > 1; i--)
    // {
    //     cout << a[n] - a[i - 1] << " ";
    // }
    // cout << endl;
    // for(int i = n; i > 1; i--)
    // {
    //     cout << a[i - 1] << " " << i - 1 << " ";
    // }
}
