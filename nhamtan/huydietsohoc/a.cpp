#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = (int)1e6 + 5;
const int MOD = (int)1e9 + 7;
int n, a[N], f;

int solve(long long x)
{
  if(a[x] != 0)
  {
    return a[x];
  }
  else if(x <= 2)
  {
    return 1;
  }
  else
  {
    a[x] = (solve(x - 1) % MOD + solve(x - 2) % MOD) % MOD;
    return a[x];
  }
}

int solve2(long long x)
{
  if(x <= 2)
    return 1;
  else
    return solve2(x - 1) + solve2(x - 2);
}

main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;
  cout << solve(10000);
} 