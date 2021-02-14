#include <iostream>
using namespace std;

int solution(int n) {
	int sum = n;
	while (n) {
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int N;
	cin >> N;

	for (int i = 1; i < N; i++) {
		int sum = solution(i);
		if (sum == N) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	
}
