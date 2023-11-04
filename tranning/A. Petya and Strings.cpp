#include <bits/stdc++.h>
using namespace std;
string a, b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] - 'A' + 'a';
        if(b[i] >= 'A' && b[i] <= 'Z')
            b[i] = b[i] - 'A' + 'a';
    }
    if(a == b)
        cout << 0;
    else if(a < b)
        cout << -1;
    else
        cout << 1;
}

