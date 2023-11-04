#include <bits/stdc++.h>

using namespace std;

int a[8][8], f[8][8];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for(int i = 1; i <= 3; i++)
		for(int j = 1; j <= 3; j++)
			cin >> a[i][j];
	for(int i = 1; i <= 3; i++)
	{
		for(int j = 1; j <= 3; j++)
			f[i][j] = 1;
	}
	for(int i = 1; i <= 3; i++)
		for(int j = 1; j <= 3; j++)
		{
			if (a[i][j] % 2 == 0)
				continue;
			else
			{
				if(f[i][j] == 1)
					f[i][j] = 0;
				else
					f[i][j] = 1;

				if(f[i + 1][j] == 1)
					f[i + 1][j] = 0;
				else
					f[i + 1][j] = 1;

				if(f[i][j + 1] == 1)
					f[i][j + 1] = 0;
				else
					f[i][j + 1] = 1;

				if(f[i][j - 1] == 1)
					f[i][j - 1] = 0;
				else
					f[i][j - 1] = 1;

				if(f[i - 1][j] == 1)
					f[i - 1][j] = 0;
				else
					f[i - 1][j] = 1;
			}
		}
	for(int i = 1; i <= 3; i++)
	{
		for(int j = 1; j <= 3; j++)
			cout << f[i][j];
		cout << "\n";
	}
	return 0;
}

