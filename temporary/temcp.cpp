#include <bits/stdc++.h>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    unordered_map <string, char> a;
    cin >> s;
    int n = s.size();
    a["000"] = '0'; a["001"] = '1'; a["010"] = '2'; a["011"] = '3';
    a["100"] = '4'; a["101"] = '5'; a["110"] = '6'; a["111"] = '7';
    while (s.length()%3 != 0) s = '0'+s;
    for (int i = 0; i < s.length(); i += 3)
    {
        string st = s.substr(i,3);
        cout << a[st];
    }
    cout << endl;
    a["0000"] = '0'; a["0001"] = '1'; a["0010"] = '2'; a["0011"] = '3';
    a["0100"] = '4'; a["0101"] = '5'; a["0110"] = '6'; a["0111"] = '7';
    a["1000"] = '8'; a["1001"] = '9'; a["1010"] = 'A'; a["1011"] = 'B';
    a["1100"] = 'C'; a["1101"] = 'D'; a["1110"] = 'E'; a["1111"] = 'F';
    while (s.length()%4 != 0) s = '0'+s;
    for (int i = 0; i < s.length(); i += 4)
    {
        string st = s.substr(i,4);
        if (i == 0 and a[st] == '0') continue;
        else cout << a[st];
    }
}
