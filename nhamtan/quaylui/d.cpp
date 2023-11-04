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
int a[10];
int check[10];
void ql(int i)
{
	if(i > n)
	{
		FOR(j , 1 , n)
			cout << a[j];
		cout << '\n';
	}
	else
	{
		FOR(j , 1 , n)
		{
			if(check[i] == false)
			{
				a[i] = j;
				check[i] = true;
				ql(i + 1);
				check[i] = false;
			}
		}
	}

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    ql(1);
}
