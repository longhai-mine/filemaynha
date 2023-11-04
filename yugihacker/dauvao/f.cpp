#include <bits/stdc++.h>
using namespace std;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.ignore();
    int t;
    cin >> t;
    while(t--)
    {
        getline(cin, s);
        int ans = 1;
        for(int i = 0; i < s.size(); i++)
            cout << i;
        cout << ans << "\n";
    }
}

