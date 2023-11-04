#include <bits/stdc++.h>
//#pragma GCC optimize("O3") 
//#pragma GCC optimize("unroll-loops") 
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt") 
using namespace std;

typedef tuple<int , int, int> t3;
typedef long long ll;
typedef long double LD;
typedef pair< int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pf push_front
#define rep(i,n) for(ll i=0;i<n;i++)
#define FOR(i,a,n) for(ll i=a;i<=n;i++)
#define FORD(i,n,a) for(ll i=n;i>=a;i++)
#define rf(i,e,s) for(ll i=e;i>=s;i--)
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);cerr.tie(nullptr)
#define NAME "a"

int n, ans, temp;
int a[10][10];
bool check[10][10], cont = true;
int dx[] = {1, 0, -1, 0} , dy[] = {0, 1, 0, -1};

void ql(int i, int j)
{
	FOR(u , 0 , 3)
		FOR(v , 0 , 3)
		{
			int k = i + dx[u];
			int z = j + dy[v];
			if(k <= 3 && z <= 3 && check[k][z] == false)
			{
				temp = temp * 10 + check[k][z];
				check[i][j] = true;
				ql(k, z);
				temp /= 10;
				check[i][j] = false;
			}
		}
}
main()
{
	fastio;
	//freopen(NAME".inp", "r", stdin);
	//freopen(NAME".out", "w", stdout);
	cin >> n;
	while(n--)
	{
		for(int i = 1; i <= 4; i++)
			for(int j = 1; j <= 4; j++)
				cin >> a[i][j];
		for(int i = 1; i <= 4; i++)
		{
			for(int j = 1; j <= 4; j++)
			{
				k = i; b = j;
				temp = a[i][j];
				check[i][j] = true;
				ql(i, j);
				temp = 0;
				check[i][j] = false;
			}
		}
		cout << ans << endl;
		ans = 0;
	}
}

// 2 4 3 
// 8 9 5
// 1 7 6