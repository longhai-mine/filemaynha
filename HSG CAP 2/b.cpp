#include<bits/stdc++.h>
using namespace std;
int cnt[300];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
    	cnt[(int)s[i]]++;
        //cout << s[i] << " ";
    }
    for(int i = 33; i <= 126; i++)
    {
        if(cnt[i] > 0)
            cout << (char)i << ": " << cnt[i] << "\n";
    }
}