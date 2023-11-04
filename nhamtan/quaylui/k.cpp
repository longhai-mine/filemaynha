#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 18 + 10;

int n, ans = INT_MAX;
char a[N];
int A[N], B[N];

void process()
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
			int cost = 0;
			for(int j = 1; j <= n; j++)
			{
				if(a[j] == 0)
					cost += A[j];
				else
					cost += B[j];
			}
			ans = min(ans, cost);
		}
}

void ql(int i)
{
	if(i > n)
	{
		process();
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
    cin >> n;
    for(int i = 1; i <= n; i++)
    	cin >> A[i] >> B[i];
    ql(1);
    cout << ans;
}