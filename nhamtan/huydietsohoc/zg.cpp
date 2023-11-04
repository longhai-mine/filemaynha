#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l, r, k;
    int ans = 0;
    cin >> k >> l >> r;
   	for(int i = l; i <= r; i++)
   	{
   		string s = to_string(i);
   		if((int)s.find(to_string(k)) != -1)
   			ans++;
   	}
   	cout << ans;
}