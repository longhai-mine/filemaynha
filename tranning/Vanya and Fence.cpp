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
    int n;
    cin >> n;
    int ansd = 0, ansa = 0;
    FOR(i, 1, n)
    {
    	char x;
    	cin >> x;
    	if(x == 'D')
    		ansd++;
    	else
    		ansa++;
    }
    if(ansd < ansa)
    	cout << "Anton";
    else if(ansa < ansd)
    	cout << "Danik";
    else
    	cout << "Friendship";
}
