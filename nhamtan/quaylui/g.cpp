#include <bits/stdc++.h>
using namespace std;


int n, m, ans, dem;
char a[(int)1e2 + 10][(int)1e2 + 10];
bool cot[100], dct[100], dcp[100];

void ql(int i)
{
    if(i > n)
        ans = max(ans, dem);
    else
        for(int j = 0; j <= m; j++)
        {
            if(j == 0) 
                ql(i + 1);
            else if(cot[j] == 0 && dct[i - j + n] == 0 && dcp[i + j] == 0 && a[i][j] == '.')
            {
                dem++;
                cot[j] = 1;
                dct[i - j + n] = 1;
                dcp[i + j] = 1;
                ql(i + 1);
                dem--;
                cot[j] = 0;
                dct[i - j + n] = 0;
                dcp[i + j] = 0;
            }
        }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    ql(1);
    cout << ans;
}
