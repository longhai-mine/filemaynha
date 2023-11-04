//nhap pair<int, int>  a
// a.first so, a.second vi tri
#include <bits/stdc++.h>
using namespace std;
int n, q;
multiset <pair<int, int>> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pair <int, int> temp = {x, i};
        a.insert(temp);
    }
    //x k <=> a.count
    cout << a.first.count(2);
}
