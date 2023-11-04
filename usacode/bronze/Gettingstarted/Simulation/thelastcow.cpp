#include <bits/stdc++.h>

using namespace std;

int x, y;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	cin >> x >> y;
	int ans = 0;
	int stat = 1;
	if(x == y)
    {
        cout << ans;
        return 0;
    }
	for(int i=1;;i *= 2) {
        int z = x + (i * stat) * 2;
		if(x < y && z >= y) {
            ans += abs(x - y);
            break;
		}
		else if(x > y && z <= y) {
            ans += abs(x - y);
            break;
		}
		else
            ans += 2 * i;
		stat*=-1;
	}
	cout << ans;
	return 0;
}

