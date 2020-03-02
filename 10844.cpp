#include <iostream>
using namespace std;
int dp[10][101] = { 0, };
int main() {
	int N;
	cin >> N;

	dp[0][1] = 0;
	for (int i = 1; i <= 9; i++) dp[i][1] = 1;
	for (int j = 2; j <= N; j++) {
		for (int i = 0; i <= 9; i++) {
			if (i == 0) dp[i][j] = dp[i + 1][j - 1];
			else if (i == 9) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i + 1][j - 1])%1000000000;
		}
	}
	int sum = 0;
	for (int i = 0; i <= 9; i++) {
		sum = (sum + dp[i][N]) % 1000000000;
	}
	cout << sum << endl;
}