#include <bits/stdc++.h>
using namespace std;
string s2;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("hextoa.inp", "r", stdin);
    //freopen("hextoa.out", "w", stdout);
    string s;
    cin >> s;
    unordered_map <char, string> a;
    a['0'] = "0000"; a['1'] = "0001"; a['2'] = "0010"; a['3'] = "0011";
    a['4'] = "0100"; a['5'] = "0101"; a['6'] = "0110"; a['7'] = "0111";
    a['8'] = "1000"; a['9'] = "1001"; a['A'] = "1010"; a['B'] = "1011";
    a['C'] = "1100"; a['D'] = "1101"; a['E'] = "1110"; a['F'] = "1111";
    for(int i = 0; i < s.size(); ++i)
    {
        cout << a[s[i]];
        s2 = s2 + a[s[i]];
    }
    cout << "\n";
    while(s2.size() % 3 != 0) s2 = '0' + s2;
    unordered_map <string, char> b;
    b["000"] = '0'; b["001"] = '1'; b["010"] = '2'; b["011"] = '3';
    b["100"] = '4'; b["101"] = '5'; b["110"] = '6'; b["111"] = '7';
    for(int i = 0; i < s2.size(); i += 3)
    {
        string t = s2.substr(i, 3);
        if(i == 0 && t == "000")
            continue;
        cout << b[t];
    }
}
