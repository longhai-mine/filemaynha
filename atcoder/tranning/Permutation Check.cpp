#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> cnt(n + 5, 0);
    for(int i = 1; i <= n; i++)
    {
   		int x;
   		cin >> x;
   		cnt[x]++;
    }
    bool check = false;
    for(int i = 1; i <= n; i++)
    {
    	if(cnt[i] == 0)
    	{
    		cout << "No";
    		return 0;
    	}
    }
    cout << "Yes";
}