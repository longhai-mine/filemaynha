#include <bits/stdc++.h>
 
using namespace std;
 
int a[1005];

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> a[i];
  int ans = 0;
  for(int i = 1; i <= n; i++) 
  {
    bool OK = true;
    for(int j = 2; j * j <= a[i]; j++) {
      if(a[i] % j == 0) { 
        OK = false;
        break;
      }
    }
    if(OK && a[i] != 1) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}