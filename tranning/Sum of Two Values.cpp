//xac dinh pos cua moi gia tri
//tim gia tri x - a[i] = k;
// k.pos;
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, x;
map <int, int> pos;
int a[(int)1e6 + 10];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] >= x)
            continue;
        int k = x - a[i];
        if(pos[k] != 0 && i != pos[k])
        {
            cout << i << " " << pos[k];
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
}
