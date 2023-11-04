#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, u , v, K, T, ans;
int k[30], t[30];

void ql(int i)
{
	if(i > n)
	{
		if(u <= K && K <= v)
			ans = max(ans, T);
	}
	else
	{
		for(int j = 0 ; j <= 1; j++)
			if(j == 0)
				ql(i + 1);
			else
			{
				K += k[i];
				T += t[i];
				ql(i + 1);
				K -= k[i];
				T -= t[i];
			}
	}
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> u >> v;
    for(int i = 1; i <= n; i++)
    	cin >> k[i] >> t[i];
    ql(1);
    cout << ans;
}
