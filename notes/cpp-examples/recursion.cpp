#include <iostream>
#include <cmath>
using namespace std;

// recursive function from book - f(n) = 2f(x - 1) + x^2
// f(0) = 0

int recursion(int n) {
	if (n == 0) {
		return 0;
	}
	// step
	return (2 * recursion(n - 1)) + pow(n, 2);

}

int main() {
	int n;
	cout << "Input N: ";
	cin >> n;

	int result = recursion(n);
	cout << result << "\n";
}
