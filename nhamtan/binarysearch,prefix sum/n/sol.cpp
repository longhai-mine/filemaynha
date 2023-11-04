#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e5 + 5;

int n, k;
int a[N], prefa[N], sufa[N];

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);

  cin >> n >> k;
  for(int i = 1; i <= n; i++) 
    cin >> a[i];

  prefa[1] = __gcd(a[1], a[0]);
  for(int i = 2; i <= n; i++) {
    prefa[i] = __gcd(prefa[i - 1], a[i]);
  }
  sufa[n] = __gcd(a[n + 1], a[n]);
  for(int i = n - 1; i >= 1; i--) {
    sufa[i] = __gcd(sufa[i + 1], a[i]);
  }

  int ans = 1;
  for(int i = 1; i + k - 1 <= n; i++) {
    int temp = __gcd(prefa[i - 1], sufa[i + k]);
    ans = max(temp, ans);
  }
  cout << ans;
  return 0;
}