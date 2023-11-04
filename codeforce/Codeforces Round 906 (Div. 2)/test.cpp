#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    int pos = a.size() - 1;
    a.insert(pos, "01");
    cout << a;
}
