#include <iostream>

int fib(int n);

int main() {
	int term;
	int n = 1;
	int sum = 0;
	while (term < 4000000) {
		term = fib(n);
		n += 1;
		if (term % 2 == 0) {
			sum += term;
		}
	}
	std::cout << sum;
	return 0;
}

int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
