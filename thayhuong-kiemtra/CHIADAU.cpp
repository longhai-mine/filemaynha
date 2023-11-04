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

int t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("chidau.inp", "r", stdin);
    freopen("chidau.out", "w", stdout);
    cin >> t;
    FOR(i , 1 , t)
    {
    	int a , b , c;
    	cin >> a >> b >> c;
    	if(abs(a - b) <= min(a , b) * c)
    		cout << "YES" << '\n';
    	else
    		cout << "NO" << '\n';
	}
}
