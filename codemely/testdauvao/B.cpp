#include <bits/stdc++.h>

using namespace std;

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  long long n, k;
  cin >> n >> k;
  if(n % k == 0)
    cout << n / k;
  else
    cout << n / k + 1;
  return 0;
}