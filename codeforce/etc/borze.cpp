#include <bits/stdc++.h>

using namespace std;

string s;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	for(int i = 0; i <= s.size() - 1; i++)
	{	
		if(s[i] == '.')
			cout << 0;
		else if(s[i] == '-')
			if(s[i + 1] == '.')
			{
				cout << 1;
				i++;
			}
			else
			{
				cout << 2;
				i++;
			}
	}
	return 0;
}