#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int dx[] = {0, 1, 0, -1, 1, -1, -1, 1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};
int n, m, ans;
char a[N][N];
bool check[N][N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= m; j++)
    	{
    		cin >> a[i][j];
    		if(a[i][j] == '#')
    			check[i][j] = true;
    	}
    }
    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= m;	 j++)
    	{
    		for(int k = 0; k < 8; k++)
    			if(i + dx[k] <= n && j + dy[k] <= m)
    				cout << a[i + dx[k]][j + dy[k]] << " ";
    		cout << endl;
    	}
    }
   	cout << ans;
}
