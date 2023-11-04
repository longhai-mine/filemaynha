#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int> > a(n + 10, vector<int> (m + 5));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			a[i][j] = i;
		}
	}
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
