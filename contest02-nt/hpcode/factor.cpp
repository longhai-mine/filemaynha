#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin >> m;
        for(int i = 2; i * i <= m; i++)
        {
            if(m % 2 == 0)
                cout << i << '*';
            while(m % 2 == 0)
                m /= i;
        }
        if(m > 1)
            cout << m;
    }
}
