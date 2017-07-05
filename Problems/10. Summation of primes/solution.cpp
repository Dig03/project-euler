#include <iostream>

bool isprime(int n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    else if (n % 2 == 0) {
        return false;
    }
    else {
        for (int d = 3; d * d <= n; d += 2) {
            if (n % d == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    long long sum = 0;
    for (int i = 2; i < 2e6; i++) {
        if (isprime(i)) {
            sum += i;
        }
    }
    std::cout << sum;
    return 0;
}