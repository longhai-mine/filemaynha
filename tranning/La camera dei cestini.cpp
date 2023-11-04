#include <bits/stdc++.h>
using namespace std;
int n, m, q;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> q;
	vector<vector<int, int> > basket(m + 10);
	for(int i = 0; i < n; i++)
	{
		basket[0][i] = i;
	}
	while(q--)
	{
		char s;
		int a, b;
		cin >> s >> a >> b;
		if(s == 's') 
		{
			
		}
	}
}
