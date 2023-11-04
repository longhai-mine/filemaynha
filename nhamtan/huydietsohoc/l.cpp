#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e7 + 5;

int n;

main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;
  int ans = 0;
  for(int i = 2; i <= n; i++) {
    if(n % i == 0) {
      ans++;
      while(n % i == 0) {
        n /= i;
      }
    }
  }
  cout << ans;
}