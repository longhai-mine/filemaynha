#include <bits/stdc++.h>
#define int long long
using namespace std;

int k, ans;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> k;
    int l = 1, r = 1e18;
    while(l <= r)
    {
    	int mid = (l + r) / 2;
    	int cnt = (mid / 2) + (mid / 3) - (mid / 6);
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
