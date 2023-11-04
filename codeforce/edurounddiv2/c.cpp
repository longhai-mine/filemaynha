#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n < 2)
        return false;
        
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int countUnrepresentable(int N) {
    int count = 0;
    
    for (int i = 2; i <= sqrt(N); i++) {
        if (isPrime(i)) {
            int power = i;
            while (power <= N / i) {
                power *= i;
                count++;
            }
        }
    }
    
    return N - count;
}

int main() {
    int N;
    //std::cout << "Enter the value of N: ";
    std::cin >> N;
    
    int result = countUnrepresentable(N);
    //std::cout << "The number of integers unrepresentable as a^b where a, b >= 2 is: " << result << std::endl;
    std::cout << result;
    return 0;
}