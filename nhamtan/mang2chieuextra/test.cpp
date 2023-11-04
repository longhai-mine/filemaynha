#include <bits/stdc++.h>

using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 5;
    for(int i = 1; i <= 2; i++)
    {
        cout << ((n - 3 + i) * (n - 2 + i) / 2) - (i * (i - 1) / 2) << " ";
    }
    return 0;
}

