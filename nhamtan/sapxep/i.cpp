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

const int N = 1e6 + 10;

int n;
string a[N];

bool cmp(string &a , string &b)
{
	if(a[0] == '-' && b[0] != '-')
		return true;
	else if (a[0] != '-' && b[0] == '-')
		return false;
	else
	{
		if(a[0] == '-' && b[0] == '-')
		{
			if(a.size() == b.size())
			{
				return (a < b);
			}
			return (a.size() < b.size());
		}
		else
		{
			if(a.size() == b.size())
			{
				if(a.size() == b.size())
				{
					return a < b;
				}
				else
					return a.size() < b.size();
			}
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    FOR(i , 1 , n)
    	cin >> a[i];
    sort(a + 1 , a + n + 1 , cmp);
    FOR(i , 1 , n)
    	cout << a[i] << " ";
}
