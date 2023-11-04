#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = (int)1e6 + 5;

int n;
int a[N], b[N];

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);

  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] = max(a[i], a[i - 1]);
  }
  for(int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  int ans = a[1] * b[1];
  for(int i = 1; i <= n; i++) {
    ans = max(ans, a[i] * b[i]);
    cout << ans << "\n";
  }
  return 0;
}