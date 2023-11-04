#include <bits/stdc++.h>
using namespace std;

typedef tuple<int , int, int> t3;
typedef long long ll;
typedef unsigned long long ull;
typedef long double LD;
typedef pair< int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pf push_front

const int MAX = 1e5 + 5;
const int LIM = 3e5 + 5;
const int MOD = 1e9 + 7;

#define rep(i,n) for(ll i=0;i<n;i++)
#define FOR(i,a,n) for(ll i=a;i<=n;i++)
#define FORD(i,n,a) for(ll i=n;i>=a;i++)
#define rf(i,e,s) for(ll i=e;i>=s;i--)

#define read(type) readInt<type>()
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);cerr.tie(nullptr)
template<typename T> T gcd(T a,T b) {return (b?__(a,b):a);}
template<typename T> T lcm(T a,T b) {return (a*(b/__gcd(a,b)));}

void runcode()
{
	#ifndef ONLINE_JUDGE
	//freopen(".in","r",stdin);
	freopen(".ou","w",stdout);
	#endif
}

const ll N = 1e3 + 5;

ll n, m, u, v;
ll a[N][N];

int main()
{
	fastio;
	cin >> n >> m >> u >> v;
	FOR(i,1,n) {
		FOR(j,1,m) {
			cin >> a[i][j];
		}
	}

	ll hang = 0, cot = 0, cheophai = 0, cheotrai = 0;
	FOR(i,1,n) {
		FOR(j,1,m) {
			if(i == u) 
				hang += a[i][j];
			if(j == v)
				cot += a[i][j];
			if(i - j == u - v)
				cheophai += a[i][j];
			if(i + j == u + v)
				cheotrai += a[i][j];
		}
	}

	cout << hang << " " << cot << " " << cheophai << " " << cheotrai;
	return 0;
}