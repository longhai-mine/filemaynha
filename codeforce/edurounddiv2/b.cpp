#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	int a[n + 5], b[n + 5];
    	int mina = 1e9 + 5, minb = mina;
    	for(int i = 1; i <= n; i++)
    	{
    		cin >> a[i];
    		mina = min(a[i], mina);
    	}
    	for(int i = 1; i <= n; i++)
    	{
    		cin >> b[i];
    		minb = min(b[i], minb);
    	}
    	long long ans = 0, ans2 = 0;
    	for(int i = 1; i <= n; i++)
    	{
    		ans += mina + b[i];
    		ans2 += minb + a[i];
    	}
    	cout << min(ans, ans2) << "\n";
    }
}