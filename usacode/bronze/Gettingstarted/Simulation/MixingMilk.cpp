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
#define NAME "mixmilk"

const int N = 3;

int milk[20], capacity[20];

main()
{
    fastio;
    freopen(NAME".in", "r", stdin);
    freopen(NAME".out", "w", stdout);
    FOR(i, 0, 2) cin >> capacity[i] >> milk[i];
    FOR(i, 0, 99) {
        int bucket1 = i % N;
        int bucket2 = (i + 1) % N;
        int curr = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);
        milk[bucket1] -= curr;
        milk[bucket2] += curr;
    }
    FOR(i, 0, 2)
        cout << milk[i] << endl;
}