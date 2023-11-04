/*==========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   28.08.2023 23:11:34                                 

*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int x;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> x;
	if(x % 5 == 0)
		cout << (int)x / 5;
	else
		cout << (int)x / 5 + 1; 	
	return 0;
}