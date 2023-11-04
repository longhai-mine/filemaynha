/*==========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   28.08.2023 23:06:18                                 

*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int k, w, n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> k >> n >> w;

	int ans = k * (w * (w + 1) / 2);
	ans -= n;
	if(ans > 0)
		cout << ans;
	else
		cout << 0;	

	return 0;
}