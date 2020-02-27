#include <iostream>
#include <algorithm>
using namespace std;
int dp[3][1001];
int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> dp[j][i];
		}
	}

	for (int i = 2; i <= N; i++) {
		dp[0][i] = dp[0][i] + min(dp[1][i - 1], dp[2][i - 1]);
		dp[1][i] = dp[1][i] + min(dp[0][i - 1], dp[2][i - 1]);
		dp[2][i] = dp[2][i] + min(dp[1][i - 1], dp[0][i - 1]);
	}
	int mini = min(dp[0][N], dp[1][N]);
	mini = min(mini, dp[2][N]);

	cout << mini <<endl;
}