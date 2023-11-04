#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e7 + 5;


long long n, prime[N];

void snt() {
  for(int i = 1; i <= N; i++) 
    prime[i] = 1;
  prime[1] = prime[0] = 0;
  for(int i = 2; i * i <= N; i++) {
    if(prime[i])
      for(int j = i * i; j <= N; j += i)
        prime[j] = 0;
  }
}

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  snt();
  cin >> n;
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(prime[i] == 1)
      ans += i;
  }
  cout << ans << "\n";
  return 0;
}