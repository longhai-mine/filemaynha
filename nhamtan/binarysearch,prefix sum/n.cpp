#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

int n, x;
int a[N], b[N];


void ql1(int i)
{
	if(i > n)
	{
		int sum = a[1];
		for(int j = 1; j < n; j++)
		{
			if(b[j] == 0)
				sum += a[j + 1];
			else
				sum -= a[j + 1];
		}
		if(sum == x)
		{
			for(int j = 1; j < n; j++)
			{
				cout << a[j] << " ";
				if(b[j] == 0)
					cout << '+' << " ";
				else
					cout << '-' << " ";
			}
			cout << a[n] << "\n";
		}
	}
	else
	{
		for(int j = 1; j <= 5; j++)
		{
			a[i] = j;
			ql1(i + 1);
		}
	}
}

void ql2(int k)
{
	if(k == n)
	{
		ql1(1);
	}
	else
	{
		for(int j = 0; j <= 1; j++)
		{
			b[k] = j;
			ql2(k + 1);
		}
	}
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    ql2(1);
}
