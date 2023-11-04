#include <bits/stdc++.h>

using namespace std;

int t;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    int s = 0, s2 = 0, s3 = 0;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        s += x;
        s2 += y;
        s3 += z;
    }
    if (s == 0 && s2 == 0 && s3 == 0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    return 0;
}       