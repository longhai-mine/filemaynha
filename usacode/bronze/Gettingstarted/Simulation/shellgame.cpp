#include <bits/stdc++.h>
using namespace std;

int n, currpepple[20], cnt[20], a, b, g;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= 3; i++)
        currpepple[i] = i;
    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b >> g;
        swap(currpepple[a], currpepple[b]);
        cnt[currpepple[g]]++;
    }
    cout << max({cnt[1], cnt[2], cnt[3]});
}

// 1 2 3
// 2 1 3 
// => ans2++
// 2 3 1
// => ans2++
// 1 3 2
// => ans1++

// why pepple under == pp chosed?
// 1(*) 2 3 