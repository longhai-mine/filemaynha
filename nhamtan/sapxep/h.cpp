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
#define int long long

const int N = 1e6 + 10;
int n;
iii a[N];

bool cmp(iii a, iii b)
{
    int resa = a.fi + a.se.fi + a.se.se;
    int resb = b.fi + b.se.fi + b.se.se;
    if(resa == resb)
    {
        if(a.fi == b.fi)
            return a.se.fi > b.se.fi;
        return a.fi < b.fi;
    }
    return resa < resb;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se.fi >> a[i].se.se;
    }
    sort(a + 1 , a + n + 1 , cmp);
    FOR(i , 1 , n)
    {
        cout << a[i].fi << " " << a[i].se.fi << " " << a[i].se.se << "\n";
    }
}
