#include <bits/stdc++.h>

using namespace std;

main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin >> t;
        while(t--)
        {
            int n, a, q;
            cin >> n >> a >> q;
            pair <int, int> s = {0, 0};
            for(int i = 1; i <= q; i++)
            {
                char x; cin >> x;
                if(x == '+')
                    s++;
                else
                    s--;
            }

        }
}
