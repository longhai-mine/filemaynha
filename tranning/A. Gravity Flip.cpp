#include <bits/stdc++.h>
using namespace std;
int n;
int a[200];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1 , a + n + 1);
    for(int i = 1 ; i <= n ; i++)
        cout << a[i] << " ";
}

