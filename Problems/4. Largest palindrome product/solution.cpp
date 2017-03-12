#include <iostream>

int reverse(int n) {
    int m = 0;
    while (n) {
        m = 10 * m + (n % 10);
        n /= 10;
    }
    return m;
}

int main() {
    int last = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int current = i * j;
            if (current == reverse(current) && current > last) {
                last = current;
            }
        }
    }
    std::cout << last;
    return 0;
}