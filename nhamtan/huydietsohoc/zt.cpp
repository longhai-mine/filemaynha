#include<bits/stdc++.h>
#define int long long
using namespace std;
int l, r;
int a[(int)1e6 + 10];
bool check(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int dem = 0;
            while(n % i == 0)
            {
                n /= i;
                dem++;
            }
            if(dem >= 2)
                return true;
        }
    }
    return false;
}
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> r;
    for(int i = l; i <= r; i++)
        if(check(i))
            a[i - l] = true;
    int ans = 0;
    for(int i = l; i <= r; i++)
    {
        for(int j = i + 1; j <= r; j++)
        {
            if(a[i - l] or a[j - l] or __gcd(i, j) != 1)
                ans++;
        }
    }
    cout << ans;
}
//a % so chinh phuong == 0
// => a * b % so chinh phuong == 0
// nguoc lai
// a % n != 1, b % n != 1 => a * b % n^2 == 0