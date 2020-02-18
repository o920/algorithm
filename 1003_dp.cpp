#include <iostream>
using namespace std;
int fibo[41];
int fibonacci(int n) {
	if (n == 0) {
		fibo[0] = 0;
		return 0;
	}
	else if (n == 1) {
		fibo[1] = 1;
		return 1;
	}

	if (fibo[n] != 0) return fibo[n];
	else return fibo[n]= fibonacci(n-1) + fibonacci(n-2);

}
int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;

		if (N == 0) cout << "1 0" << endl;
		else if (N == 1) cout << "0 1" << endl;
		else {
			fibonacci(N);
			cout << fibo[N - 1] << " " << fibo[N] << endl;
		}

	}
}