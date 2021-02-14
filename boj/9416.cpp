#include <iostream>
using namespace std;
long long dp[101] = {0,};
long long DP(int n) {
	if (n == 1 || n == 2 || n == 3) {
		dp[n] = 1; 
		return 1;
	}
	else if (n == 4 || n == 5) { 
		dp[n] = 2; 
		return 2; 
	}
	if (dp[n] != 0) return dp[n];
	else return dp[n] = DP(n - 1) + DP(n - 5);
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		cout << DP(N) << endl;
	}
}
