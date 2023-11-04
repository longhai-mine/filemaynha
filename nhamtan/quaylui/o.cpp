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

string s;
int ans = 1e18 + 5;

void check()
{
    int temp = 0;
    FOR(i , 0 , s.size() - 1)
        FOR(j , i + 1 , s.size())
        {
            if(s[i] != s[j])
            {
                temp += s.size() - j;
                break;
            }
        }
    //cout << temp << endl;
    ans = min(ans, temp);
}

void ql(int i)
{
    if(i == s.size()) 

        check();
    else
    {
        if(s[i] == '?')
            for(char t : {'A', 'T', 'G', 'X'})
            {
                s[i] = t;
                ql(i + 1);
                s[i] = '?';
            }
        else
            ql(i + 1);
    }
}

main()
{
    fastio;
    //freopen(NAME".inp", "r", stdin);
    //freopen(NAME".out", "w", stdout);
    cin >> s;
    ql(0);
    cout << ans;
}