#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

long long find_lcm(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i) % MOD;
    }
    return result;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    cout << find_lcm(n) << endl;
    return 0;
}