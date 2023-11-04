#include<bits/stdc++.h>
using namespace std;
int n;
pair <pair<int, int>, int> a[(int)1e6 + 10];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
    	cin >> a[i].first.a[i].first >> a[i].first.a[i].second;
    	a[i].second = a[i].first.first + a[i].first.second;
    }
    for(int i = 1; i <= n; i++)
    {
    	cout << a[i].second;
    }
}