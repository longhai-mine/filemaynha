#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, ans;
int a[(int)1e5 + 10];
map <int, int> cnt;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
    {
        int ak = 2 * a[i];
        bool check = true;
        for(int k = 1; k < n && check == true; k++)
        {
            for(int j = k + 1; j <= n && check == true; j++)
            {
                if(a[k] + a[j] == ak)
                {
                    ans++;
                    check = false;
                    break;
                }
            }
        }
    }
    cout << ans;
}
