#include <bits/stdc++.h>

using namespace std;

main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  int n;
  cin >> n;
  if(n % 4 == 0 && n % 100 != 0)
    cout << "Yes";
  else if(n % 400 == 0)
    cout << "Yes";
  else  
    cout << "No";
  return 0;
}