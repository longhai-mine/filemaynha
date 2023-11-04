#include <bits/stdc++.h>
using namespace std;
bool cmp(int x, int y)
{
	return x > y;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n + 10];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
}
