#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = (int)1e6 + 5;

int n;
int a[N], f[N], sum[N];

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0); 
  
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> a[i];

  int q;
  cin >> q;
  while(q--)
  {
    int l, r, x;
    cin >> l >> r >> x;
    f[l + 1] += 1;
    f[r + 1] -= 1;
    sum[r + 1] += r - l + x;
    sum[l] -= x;
  }
  int cnt = 0, sum1 = 0;
  for(int i = 1; i <= n; i++)
  {
    cnt = cnt + f[i];
    sum1 = sum1 + cnt - sum[i];
    cout << sum1 + f[i] << " ";
  }
  return 0;
}