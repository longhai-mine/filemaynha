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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d, m;
    cin >> d >> m;
    if(m == 1)
        m = 11;
    else if(m == 2)
        m = 12;
    else
        m -= 2;
    int y = 21;
    int c = 21;
    int ans = d + (13 * m - 1) / 5 + y + y / 4 + c / 4 - 2 * c;
    ans %= 7;
    cout << ans;
}
