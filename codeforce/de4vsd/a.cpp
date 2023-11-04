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

int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    FOR(i , 1, n)
    {
    	int x;
    	cin >> x;
    	bool check = false;
    	if(x < 7)
    		cout << "NO" << "\n";
    	else
    	{
    		if((x - 3) % 3 != 0 && (x - 3) > 3)
    		{
    			cout << "YES" << "\n";
    			cout << 1 << " " << 2 << " " << x - 3 << "\n";
    		}
    		int k = 5;
    		while((x - k) % 3 == 0 && (x - k) > 3)
    		{
    			++k;
    			if((x - k) % 3 != 0)
    			{
    				cout << "YES" << "\n";
    				cout << 1 << " " << 2 + k << " " << x - k;
    			}
    		}
    	}
    }
}
