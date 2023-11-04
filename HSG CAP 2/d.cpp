#include<bits/stdc++.h>
using namespace std;
int cnt[1000005];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int ans = 0;
    cnt[0] = s[0] - '0';
    for(int i = 1; i < s.size(); i++)
    {
    	int x = s[i] - '0';
    	cnt[i] = x;
    	cnt[i] += cnt[i - 1];
    }
    for(int i = 0; i <= s.size(); i++)
    {
        if(s[i] == '0')
            for(int j = i + 1; j <= s.size(); j++)
            {
                if(s[j] == '0' && ((cnt[j] - cnt[i - 1]) % 2 != 0))
                    ans++;
            }
    }
    cout << ans;
}