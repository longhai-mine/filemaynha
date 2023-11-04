#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3 + 10;

string s;
int a[N], ans, number;

bool check()
{
	number = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(a[i] == 1)
			number = number * 10 + (s[i] - '0');
	}
	for(int i = 2; i * i <= number; i++)
		if(number % i == 0)
			return false;
	return true;
}

void ql(int i)
{
	if(i == s.size())
	{
		if(check())
		{
			ans = max(ans, number);
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
    cin >> s;
    ql(0);
    cout << (ans == 0 ? -1 : ans);
}
