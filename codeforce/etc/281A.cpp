#include <bits/stdc++.h>

using namespace std;

string s;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> s;
	if(s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 'a' + 'A';
	cout << s;
}