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
#define int long long
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

const int N = 1e3 + 5;

int n, x;
int a[N];

void tryy()
{
	int sum = 0;
	for(int i = 1; i <= n; i++)
		sum += a[i];
	if(sum == x)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j == 1)
				cout << a[j] << " ";
			else if(a[j] > 0)
				cout << '+' << " " << a[j] << " ";
			else if(a[j] < 0)
				cout << '-' << " " << abs(a[j]) << " ";
		}
		cout << nl;
	}
	//if(sum == x) cout << sum << " ";
}

void ql(int i)
{
	if(i > n)
	{
		tryy();
	}
	else 
	{
		for(int j = 1; j <= 5; j++)
		{
			a[i] = j;
			ql(i + 1);
		}
		if(i != 1)
		{
			for(int j = -1; j >= -5; j--)
			{
				a[i] = j;
				ql(i + 1);
			}
		}
	}
}

main()
{
	fastio;
	//freopen(NAME".inp", "r", stdin);
	//freopen(NAME".out", "w", stdout);
	cin >> n >> x;
	ql(1);
	//cout << n;
}