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

int n, u, k, ans;
int a[(int)1e6 + 10];
int b[(int)1e6 + 10];
bool check(int x)
{
	int temp = k;
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		cnt += b[i];
		int l = max(0LL, i - u - 1);
		int r = min(n, i + u);
		if((a[r] - a[l]) + cnt < x)
		{
			int currk = x - (a[r] - a[l] + cnt);
			if(currk > temp)
				return false;
			temp -= currk;
			cnt += currk;
			b[min(n + 1, i + u * 2 + 1)] -= currk;
		}
	}
	return true;
}

main()
{
	fastio;
	//freopen(NAME".inp", "r", stdin);
	//freopen(NAME".out", "w", stdout);
	cin >> n >> u >> k;
	FOR(i, 1, n)
	{
		int x;
		cin >> x;
		a[i] += a[i - 1] + x;
	}
	int l = 1, r = 1e12;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(check(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	cout << ans;
}