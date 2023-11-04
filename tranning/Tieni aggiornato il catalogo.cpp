#include<bits/stdc++.h>
#define int long long
using namespace std;
int q;
map <long long, long long> cnt;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    for(int i = 1; i <= q; i++)
    {
    	char s;
    	int x; 
    	cin >> s >> x;
    	if(s == 'a')
    	{
    		cnt[x]++;
    	}
    	else if(s == 'c')
    	{
    		cout << cnt[x] << "\n";
    	}
    	else
    		cnt[x]--;
    }
}