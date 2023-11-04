#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    int ans = 0;
    for(int i = 1; i <= a; i++)
    {
    	int x;
    	cin >> x;
    	if(x > 10)
    	{
    		ans += x - 10;
    	}
    }
    cout << ans;
}