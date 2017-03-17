#include <iostream>

int sum(float a, float n, float d) {
    return (n/2)*(2*a+(n-1)*d);
}

int square_sum(int n) {
    return n*(n+1)*(2*n+1)/6;
}

int main() {
    int no_sum = sum(1, 100, 1);
    int sq_sum = square_sum(100);
    std::cout << no_sum*no_sum - sq_sum;
    return 0;
}