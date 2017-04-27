#include <iostream>

bool isprime(int n) {
    if (n == 1 || n == 2) {
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

int getprime(int n) {
    int n_prime = 0;
    int i = 1;
    while (n_prime < n) {
        i++;
        if (isprime(i)) {
            n_prime++;
        }
    }
    return i;
}
int main() {
    std::cout << getprime(10001);
    return 0;
}
