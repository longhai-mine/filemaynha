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

int n, m, ans, temp;
char a[10][10];
int b[10];

void ql(int i)
{
    if(i > n)
        ans = max(ans, temp);
    else
    {
        FOR(j , 0 , m)
        {
            if(j == 0)
                ql(i + 1);
            else if(b[j] == 0 && a[i][j] == '.')
            {
                temp++;
                b[j] = 1;
                ql(i + 1);
                temp--;
                b[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    FOR(i , 1 , n)
        FOR(j , 1 , m)
            cin >> a[i][j];
    ql(1);
    cout << ans;
}
