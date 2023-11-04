#include <bits/stdc++.h>
#define int long long
using namespace std;

vector < long long > ans(1e2 + 5);
int n;

void backtrack(long long i)
{
	for(int j = 1; j >= 0; j--)
	{
		ans[i] = j;
		if(i == n)
		{
			for(int k = 1; k <= n; k++)
			{ 
				cout << ans[k] << " ";
			}
			cout << endl;
		}
		else
			backtrack(i + 1);
	}
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	backtrack(1);
}