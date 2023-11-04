#include<bits/stdc++.h>
using namespace std;
int n;
pair <int, int> a[(int)1e6 + 10];
int cnt[(int)1e6 + 10];
bool cmp(pair<int, int> x, pair <int, int> y)
{
	if(cnt[x.first] == cnt[y.first])
		return x.second < y.second;
	else
		return cnt[x.first] > cnt[y.first];
}
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
    	cin >> a[i].first;
    	a[i].second = i;
    	cnt[a[i].first]++;
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++)
    	cout << a[i].first << " ";
}
