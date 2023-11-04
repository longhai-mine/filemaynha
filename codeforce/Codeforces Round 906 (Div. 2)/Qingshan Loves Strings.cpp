#include <bits/stdc++.h>
using namespace std;

int t, n, m;
string a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        cin >> a >> b;
        int check = true;
        int check3 = true;
        char begin, end;
        for(int i = 0; i < m - 1; i++)
        {
            if(b[i] == b[i + 1])
            {
                check = false;
                break;
            }
        }
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] == a[i + 1])
            {
                check3 = false;
                break;
            }
        }
        if(check3 == true)
            cout << "Yes" << "\n";
        else if(check == true)
        {
            begin = b[0];
            end = b[m - 1];
            bool check2 = true;
            for(int i = 0; i < n - 1; i++)
            {   
                if(a[i] != a[i + 1])
                    continue;
                if(a[i] == begin || a[i + 1] == end)
                {
                   cout << "No" << "\n";
                   check2 = false;
                   break;
                }  
            }
            if(check2 == true)
                cout << "Yes" << "\n";
        }
        else
            cout << "No" << "\n";
    }
}
