#include<bits/stdc++.h>
using namespace std;
int n;
map <string, int> a;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
    	string s;
    	cin >> s;
    	a[s]++;
    }
    for(auto i : a)
    	cout << i.first << " " << i.second << " ";
}