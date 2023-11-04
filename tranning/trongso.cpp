#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e5 + 10;

int n, a[mxN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++) 
    	cin >> a[i];
    sort(a+1,a+n+1);
    int ans=0;
    for(int i=1;i<=n/2;i++) {
    	ans+=abs(a[i]-a[n-i+1]);
    	//cout << a[i] << " " << a[n-i] << " " << i << endl;
    }
    cout << ans;
}
