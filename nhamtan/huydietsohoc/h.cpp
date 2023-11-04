#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> prime(1e7 + 5, 1);
void snt() {
	prime[1] = 0;
	for(int i = 2; i * i <= 1e7; i++)
		if(prime[i] == 1)
			for(int j = i * i; j <= 1e7; j += i)
				prime[j] = 0;
}

bool cmp(int x, int y) {
	return x > y;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	snt();
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if(prime[x] == true)
		a.push_back(x);
	}
	if(a.size() == 0) {
		cout << - 1;
		return 0;
	}
	sort(a.begin(), a.end(), cmp);
	deque<int> ans;
	for(int i = 0; i < a.size(); i++) {
		if(i % 2 == 0)
			ans.push_back(a[i]);
		else
			ans.push_front(a[i]);
	}	
	for(auto i : ans)
		cout << i << " ";
}