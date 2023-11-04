#include <bits/stdc++.h>
using namespace std;

#define ii pair < int , int >
#define iii pair < int , ii >
#define iv pair < ii , ii >

#define fi first
#define se second
#define fr front()
#define pb push_back

#define FOR(i , x , n) for(int i = x ; i <= n ; ++i)
#define REP(i , n) for(int i = 0 ; i < n ; ++i)
#define FORD(i , x , n) for(int i = x ; i >= n ; --i)

int n, k, ans;
int pre[(int)1e6 + 10];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    FOR(i , 1 , n)
    {
        int x;
        cin >> x;
        pre[i] = pre[i - 1] + x;
    }
    FOR(j , 1 , n)
    {
        int l = 1, r = j, cnt = j;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(pre[mid - 1] >= pre[j] - k)
            {
                cnt = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        ans += j - cnt + 1;
    }
    cout << ans;
}
