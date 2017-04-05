#include <iostream>

void factors(long long n) {
    long long i = 2;

    while (i * i <= n) {
        if (n % i == 0) {
            std::cout << i << std::endl;
            n /= i;
        }
        else {
            i++;
        }
    }

    if (n > 1) {
        std::cout << n;
    }
}

int main() {
    factors(600851475143);
    return 0;
}
