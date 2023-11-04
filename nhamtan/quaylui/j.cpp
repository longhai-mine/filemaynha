#include <bits/stdc++.h>
using namespace std;

const int N = 18 + 10;

int n, k, cnt;
char a[N];

void print()
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
		if(check == true && sum == 0)
		{
			cnt++;
			if(cnt == k)
			{
				for(int j = 1; j <= n; j++)
				{
					if(a[j] == 0)
						cout << '(';
					else
						cout << ')';
				}
			}
		}
}

void ql(int i)
{
	if(i > n)
	{
		print();
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
    if(cnt < k)
        cout << -1;
}
