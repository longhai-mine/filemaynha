#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3 + 10;

int n, k;
int a[N];

bool check()
{
	int sum = 0;
	bool check = true;
	for(int j = 1; j <= n; j++)
	{
		if(a[j] == 0)
			sum++;
		else
			sum--;
		if(sum < 0)
		{
			check = false;
			break;
		}
	}
	if(sum == 0 && check == true)
		return true;
	else
		return false;
}

bool check2()
{
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 0)
			sum++;
		else
			sum = 0;
		if(sum > k)
			return false;
	}
	return true;
}

void print()
{
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 0)
			cout << '(';
		else
			cout << ')';
	}
	cout << "\n";
}

void ql(int i)
{
	if(i > n)
	{
		if(check() && check2())
		{
			print();
		}
	}
	else
	{
		for(int j = 0; j <= 1; j++)
		{
			a[i] = j;
			ql(i + 1);
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    ql(1);
}
