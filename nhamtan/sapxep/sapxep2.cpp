#include<bits/stdc++.h>
using namespace std;
int n;
pair <int, int> a[(int)1e6 + 10];
int process(int x)
{
    int res = 0;
    while(x != 0)
    {
        int y = x % 10;
        res += y;
        x /= 10;
    }
    return res;
}
bool cmp(pair <int, int> x, pair <int, int> y)
{
    if(process(x.first) == process(y.first))
        return x.second < y.second;
    else
        return process(x.first) < process(y.first);
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
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++)
    {
        cout << a[i].first << " ";
    }
}