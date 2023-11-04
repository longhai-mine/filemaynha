#include<bits/stdc++.h>
using namespace std;
 
#define y1 as214
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
 
#define ll long long
#define oo 1e9
#define eps 1e-8
#define div divv
#define pow poww
 
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    if(abs(a - b) == 1 || abs(a - b) == 9)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
}