#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 1;; i++)
    {
    	if(c * i >= a && c * i <= b) {
            cout << c * i; 
            return 0;
        }
 		else if(c * i > b)
 			break;
    }
    cout << -1;
}