#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000005], b[1000005], c[2000010];
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) // n lan
        cin >> a[i];
    cin >> m;
    for(int j = 1; j <= m; j++) // m lan
        cin >> b[j];
    int i = 1, j = 1, cnt = 1;;
    while(i < n && j < m) // n + m lan
    {
        if(a[i] <= b[j])
        {
            c[cnt++] = a[i];
            ++i;
            s = s + 'a';
        }
        else
        {
            c[cnt++] = b[j];
            ++j;
            s = s + 'b';
        }
    }
    cout << endl << i << " " << j << endl;
    while(i < n)
    {
        c[cnt++] = a[i++];
        s = s + 'a';
    }
    while(j < m)
    {
        c[cnt++] = b[j++];
        s = s + 'b';
    }
    for(int k = 1; k <= n + m + 5; k++)
        cout << c[k] << " ";
    cout << "\n";
    cout << s;
}

