#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, k, ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    int l = 1, r = 1e12 + 10;
    while(l <= r)
    {
    	int mid = (l + r) / 2;
    	int cnt = 0;
    	for(int i = 1; i <= n; i++)
    		cnt += min(m, mid / i);
    	if(cnt >= k)
    	{
    		ans = mid;
    		r = mid - 1;
    	}
    	else
    		l = mid + 1;
    }
    cout << ans;
}
