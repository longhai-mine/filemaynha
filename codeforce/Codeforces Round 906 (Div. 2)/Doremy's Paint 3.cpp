#include <bits/stdc++.h>
using namespace std;

int a[(int)1e5 + 10];
int t, n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
    	cin >> n;
    	int a = 0, b = 0, cnta = 0, cntb = 0;
    	bool check = true;
    	for(int i = 1; i <= n; i++)
    	{
    		int x; cin >> x;
    		if(a == 0)
    			a = x;
    		else if(b == 0 && x != a)
    			b = x;
    		if(a != 0 && x == a)
    			cnta++;
    		else if(b != 0 && x == b)
    			cntb++;
    	}
        if(a != 0 && b == 0)
            cout << "Yes" << "\n";
    	else if((cnta + cntb != n) || (n % 2 != 0 && abs(cnta - cntb) != 1) || (n % 2 == 0 && abs(cnta - cntb) != 0))
    		cout << "No" << "\n";
    	else
    		cout << "Yes" << "\n";
    }
}
