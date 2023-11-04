//imback
#include <bits/stdc++.h>
#define int long long
using namespace std;
int sol[1000005];
void solve()
{
    sol[1] = 1;
    for(int i = 3; i <= 1e6; i += 2)
    {
        sol[i] += sol[i - 2] + i * i;
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve ();
    int t;
    cin >> t;
    //cout << t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n % 2 == 0)
            n--;
        cout << sol[n] << "\n";
    }
}
