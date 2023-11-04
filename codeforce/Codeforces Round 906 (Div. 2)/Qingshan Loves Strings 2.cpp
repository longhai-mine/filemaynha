#include <bits/stdc++.h>
#define int long long
using namespace std;

int t, n;
vector <int> sa;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int dem = 0;
        int pos = a.size() - 1;
        int i;
        for(i = 0; i <= n / 2 + 1 && dem <= 300; i++)
        {
            if(a[i] == a[pos])
            {
                dem++;
                a.insert(pos, "01");
                //sa.push_back(pos);
                pos += 2;
                n += 2;
            }
            pos--;
        }
        cout << a << "\n";
        //sa.clear();
    }
}
