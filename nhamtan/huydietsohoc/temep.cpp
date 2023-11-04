#include <iostream>

using namespace std;

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
        result = lcm(result, i);
    }
    return result % (1000000007);
}

int main() {
    int n;
    //cout << "Nhap so nguyen duong n: ";
    cin >> n;
    cout << find_lcm(n) << endl;
    return 0;
}