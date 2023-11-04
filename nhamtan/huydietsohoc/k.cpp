#include <bits/stdc++.h>

using namespace std;

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  long long n, m;
  cin >> n >> m;
  long long nam = n / __gcd(n, m);
  long long nu = m / __gcd(n, m);
  cout << __gcd(n, m) << "\n";
  cout << nam << " " << nu;
  return 0;
}c