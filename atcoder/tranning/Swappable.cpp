#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> a(n + 5);
    for(int i = 1; i <= n; i++)
    	cin >> a[i];
    int ans = 0;
    for(int i = 1; i < n; i++)
    {
    	for(int j = i + 1; j <= n; j++)
    	{
    		if(a[i] != a[j])
    			ans++;
    	}
    }
    cout << ans;
}