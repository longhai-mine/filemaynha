#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[15], sum = 0;
    for(int i = 1; i <= 9; i++)
    {
    	cin >> a[i];
    	sum += a[i];
    }
    int pos1, pos2;
    for(int i = 1; i < 9; i++)
    {
    	int temp = sum;
    	for(int j = i + 1; j <= 9; j++)
    	{
    		if(temp - a[i] - a[j] == 100)
    		{
                //cout << a[i] << " " << a[j];
    			for(int k = 1; k <= 9; k++)
    			{
    				if(k != i && k != j)
    					cout << a[k] << "\n";
    			}
    			return 0;
    		}
    	}
    }
}