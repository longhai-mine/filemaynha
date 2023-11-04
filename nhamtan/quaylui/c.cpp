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
int a[20];
void ql(int i)
{
	if(i > n)
	{
		int chan = 0 , le = 0;
		FOR(i , 1 , n)
		{
			if(i % 2 == 0)
				chan += a[i];
			else
				le += a[i];
		}
		if(chan == le)
		{
			FOR(i , 1 , n)
				cout << a[i];
			cout << "\n";
		}
	}
	else
	{
		FOR(j , 0 , 1)
		{
			a[i] = j;
			ql(i + 1);
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
	