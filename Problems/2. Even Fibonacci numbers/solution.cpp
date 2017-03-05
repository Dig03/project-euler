#include <iostream>

int fib(int n);

int main() {
	int f = 0;
	int n = 1;
	int sum = 0;
	while (f < 4000000) {
		f = fib(n);
		n += 1;
		if (f % 2 == 0) {
			sum += f;
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
