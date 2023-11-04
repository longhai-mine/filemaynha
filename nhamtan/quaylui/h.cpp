#include <bits/stdc++.h>
using namespace std;

int n;
int cnt[300], type[300];
string s;

bool check(string a)
{
    for(int k = 0; k <= (a.size() - 1) / 2; k++)
    {
        if(a[k] != a[n - k - 1])
            return false;
    }
    return true;
}

void ql(int i)
{
    if(i > n)
    {
        if(check(s))
        {
            cout << s << "\n";
            //cout << cnt['A'] << endl;
        }
    }
    else
    {
        for(char j = 'A'; j <= 'D'; j++)
        {
            if(cnt[j] < type[j] / 2)
            {
                s = s + j;
                cnt[j]++;
                ql(i + 1);
                s.pop_back();
                cnt[j]--;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> type['A'] >> type['B'] >> type['C'] >> type['D'];
    ql(1);
}
