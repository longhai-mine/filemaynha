/*==========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   29.08.2023 14:18:26                                 

*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

string s;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int upper = 0, lower = 0;
	cin >> s;
	for(int i = 0; i <= sizeof(s) - 1; i++) 
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			upper++;
		else
			lower++;	
	} 

	if(upper > lower) 
	{
		for(int i = 0; i <= sizeof(s) - 1; i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z') 
			{
				cout << s[i] - 'a' + 'A';
			}
			else 
				cout << s[i];
		}  
	}
	else 
	{
		for(int i = 0; i <= sizeof(s) - 1; i++) 
		{
			if(s[i] >= 'A' and s[i] <= 'Z') 
			{
				cout << s[i] - 'A' + 'a';
			}
			else 
				cout << s[i];
		}
	}

	return 0;
}