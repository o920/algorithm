#include <iostream>
using namespace std;
long long dp[91] = {0,};
long long fibo(int n) {
	if (n == 0) {
		dp[0] = 0;
		return dp[0];
	}
	else if (n == 1) {
		dp[1] = 1;
		return dp[1];
	}
	if (dp[n]!=0) return dp[n];
	return dp[n] = fibo(n - 1) + fibo(n - 2);
}
int main() {
	int N;
	cin >> N;
	cout << fibo(N) << endl;
}