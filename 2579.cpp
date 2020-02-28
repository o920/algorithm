#include <iostream>
#include <algorithm>
using namespace std;
int dp[305] = { 0, };
int step[305]{ 0, };
int main() {
	int N;
	cin >> N;
	for (int i = 3; i < N+3; i++)cin >> step[i];

	for (int i = 3; i < N+3; i++) {
		dp[i] = step[i] + max(dp[i - 3] + step[i - 1], dp[i - 2]);
	}
	
	cout << dp[N + 2] << endl;
}