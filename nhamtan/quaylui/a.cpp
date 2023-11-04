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
int a[100];
void solve(int i)
{
	FOR(j , 0 , 1)
	{
		a[i] = j;
		if(i == n)
		{
			FOR(k , 1 , n)
				cout << a[k];
			cout << "\n";
		}
		else
			solve(i + 1);
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    solve(1);
}
