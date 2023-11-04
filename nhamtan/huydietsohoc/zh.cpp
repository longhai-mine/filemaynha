#include <bits/stdc++.h>
#define int long long 
using namespace std;
int t;
vector <int> snt(2e7 + 5, 1);
void prime()
{
	snt[1] = snt[0] = 0;
	for(int i = 2; i * i <= 2e7; i++)
		if(snt[i])
			for(int j = i * i; j <= 2e7; j += i)
				snt[j] = false;
}
bool check(long long x)
{
	int primeback, primefront;
	for(int i = x - 1; i >= 2; i--)
	{
		if(snt[i])
		{ 
			primefront = i;
			break;
		}
	}
	for(int i = x + 1; i <= 2e7; ++i)
	{
		if(snt[i]) 
		{
			primeback = i;
			break;
		}
	}
	// cout << primeback << " ";
	// cout << primefront << " " << endl;
	return ((primeback + primefront) / 2) == x;
}
main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	prime();
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int k;
		cin >> k;
		if(check(k))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	// for(int i = 1; i <= 100; i++)
	// 	if(snt[i]) 
	// 		cout << i << " ";
}