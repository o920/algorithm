#include <iostream>
using namespace std;
int dp[1000001] = { 0, };

int count(int n) {
	if (n == 1) {
		dp[n] = 1;
		return 1;
	}
	else if (n == 2) {
		dp[n] = 2;
		return 2;
	}
	
	if (dp[n] != 0) {
		return dp[n];
	}
	else {
		return dp[n] = (count(n - 1) + count(n - 2)) % 15746;
	}
}

int main() {
	int N;
	cin >> N;

	cout << count(N) << endl;
}