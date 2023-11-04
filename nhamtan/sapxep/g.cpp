#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define ii pair < int , int >
#define iii pair < int , ii >

int n;
int pos[(int)1e6 + 10], cnt[(int)1e6 + 10], a[(int)1e6 + 10];
bool cmp(int a, int b)
{
    if(cnt[a] == cnt[b])
        return pos[a] < pos[b];
    return cnt[a] > cnt[b];
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        if(pos[a[i]] == 0)
            pos[a[i]] = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++)
        cout << a[i] <<  " ";
}
