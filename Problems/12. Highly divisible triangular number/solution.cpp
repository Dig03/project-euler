#include <iostream>

int triangular(int n) {
    int sum = 0;
    for (int i = 1; i < n+1; i++) {
        sum += i;
    }
    return sum;
}

int n_divisors(int n) {
    int num = 0;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            num += 2;
        }
    }
    return num;
}

int main() {
    int i = 1;
    while (n_divisors(triangular(i)) < 500) {
        i++;
    }
    std::cout << triangular(i);
    return 0;
}