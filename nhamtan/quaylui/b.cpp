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
int n, k;
int a[100];
int check = 1;
void solve(int i)
{
	if(i > n)
	{
		if(a[1] != 0)
		{
			int dem = 0;
			FOR(j , 1 , n)
				if(a[j] == 1)
					dem++;
 
			if(dem <= k)
			{
				FOR(j , 1 , n)
				{
					cout << a[j];
				}
				cout << "\n";
			}
		}
	}
	else
	{
		FOR(j , 0 , 1)
		{
			a[i] = j;
			solve(i + 1);
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    solve(1);
}