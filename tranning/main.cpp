#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    int a[200005], b[200005];
    for(int i = 1; i <= n; i++)
      cin >> a[i];
    for(int i = 1; i <= m; i++)
      cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    // for(auto i : b)
    //   cout << i << " ";
    int i = 1, j = 1;
    int ans = 0;

    while(i <= n && j <= m)
    {
      if(abs(a[i] - b[j]) <= k)
      {
        ++ans;
        ++i;
        ++j;
      }
      else
      {
        if(a[i] - b[j] > 0)
        {
          ++j;
        }
        else
        {
          ++i;
        }
      }
    }
    cout << ans;
}