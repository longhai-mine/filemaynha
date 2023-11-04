#include <bits/stdc++.h>

using namespace std;

int y;

bool process(int x)
{
	int a[10];
	memset(a, 0, sizeof(a));
	while(x != 0)
	{
		int y = x % 10; 
		a[y]++;
		x /= 10;
	}
	for(int i = 0; i <= 9; i++)
	{
		if(a[i] > 1)
			return false;
	}
	return true;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> y;
	bool check = true;
	while(check)
	{
		y++;
		if(process(y) == true)
		{
			cout << y;
			check = false;
		}
	}
	return 0;
}
