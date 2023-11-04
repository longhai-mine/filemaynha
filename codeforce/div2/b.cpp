#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = (int)1e3;
int n, m, k;
int a[N], b[N];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
    	int n, m, k;
        cin >> n >> m >> k;
        
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= m; i++) cin >> b[i];
        int x = 1, y = 1;
        for(int i = 2; i <= n; i++) if(a[i] < a[x]) x = i;
        for(int i = 2; i <= m; i++) if(b[i] > b[y]) y = i;
        if(b[y] > a[x]) swap(a[x], b[y]);
        x = 1, y = 1;
        if(k % 2 == 0)
        {
            for(int i = 2; i <= n; i++) if(a[i] > a[x]) x = i;
            for(int i = 2; i <= m; i++) if(b[i] < b[y]) y = i;
            if(a[x] > b[y]) swap(a[x], b[y]); 
        }  
        int ans = 0;
        for(int i = 1; i <= n; i++)
            ans += a[i];
        cout << ans << "\n";
    }
}