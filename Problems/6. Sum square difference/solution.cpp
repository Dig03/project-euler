#include <iostream>

int sum(float a, float n, float d) {
    return (n/2)*(2*a+(n-1)*d);
}

int square_sum(int n) {
    return n*(n+1)*(2*n+1)/6;
}

int main() {
    int normal_sum = sum(1, 100, 1);
    int square_sum = 0;
    for (int i = 1; i < 101; i++) {
        square_sum += i*i;
    }
    std::cout << normal_sum*normal_sum - square_sum;
    return 0;
}