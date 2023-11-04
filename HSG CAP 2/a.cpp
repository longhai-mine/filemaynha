#include<bits/stdc++.h>
using namespace std;
string s;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    int ans = 0;
    bool check = true;
    for(int i = 0; i < s.size(); i++)
    {
    	if(s[i] == '_' && check)
    	{
    		ans++;
            //cout << i << " ";
    		//ans = max(ans, temp);
            check = false;
    	}
        else if(s[i] == '_' && !check)
            continue;
        else
            check = true;
    }
    cout << ans;
}