/*==========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   29.08.2023 21:20:42                                 

*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

string pi = {"314159265358979323846264338327"};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int ans = 0;
		for(int i = 0; i <= size(s) - 1; i++) {
			if(s[i] == pi[i])
				ans++;
			else 
				break;
		}
		cout << ans << "\n";
	}
	csd cds cd;
	return 0;
}