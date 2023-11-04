#include <bits/stdc++.h>

using namespace std;

long long a1, b1, c1;

long long multiply_modulo(long long a, long long b, long long M)
{
    if (b == 0)
        return 0;

    long long t = multiply_modulo(a, b / 2, M) % M;

    if (b & 1)
        return ((t + t) % M + a % M) % M;
    else
        return (t + t) % M;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> a1 >> b1 >> c1;
	cout << multiply_modulo(a1, b1, c1);
	return 0;
}