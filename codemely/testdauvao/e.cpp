#include <bits/stdc++.h>

using namespace std;

int n, check[20], ans[20];

void sol(long long x) {
  for(int i = 1; i <= n; i++) {
    if(check[i] == 0) {
      ans[x] = i;
      check[i] = 1;
      if(x == n) {
        for(int k = 1; k <= n; k++) cout << ans[k];
        cout << "\n";
      }
      sol(x + 1);
      check[i] = 0;
    }
  }
}

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  cin >> n;
  sol(1);
  return 0;
}