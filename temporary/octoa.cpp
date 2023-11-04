#include <bits/stdc++.h>
using namespace std;
string s2;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("octoa.inp", "r", stdin);
    freopen("octoa.out", "w", stdout);
    string s;
    cin >> s;
    unordered_map <char, string> a;
    a['0'] = "000", a['1'] = "001", a['2'] = "010", a['3'] = "011";
    a['4'] = "100", a['5'] = "101", a['6'] = "110", a['7'] = "111";
    for(int i = 0; i <= s.size() - 1; i++)
    {
        s2 = s2 + a[s[i]];
    }
    cout << s2 << "\n";
    while(s2.size() % 4 != 0) s2 = '0' + s2;
    unordered_map <string, char> b;
    b["0000"] = '0'; b["0001"] = '1'; b["0010"] = '2'; b["0011"] = '3';
    b["0100"] = '4'; b["0101"] = '5'; b["0110"] = '6'; b["0111"] = '7';
    b["1000"] = '8'; b["1001"] = '9'; b["1010"] = 'A'; b["1011"] = 'B';
    b["1100"] = 'C'; b["1101"] = 'D'; b["1110"] = 'E'; b["1111"] = 'F';
    for(int i = 0; i <= s2.size() - 1; i += 4)
    {
        string t = s2.substr(i, 4);
        cout << b[t];
    }
}
