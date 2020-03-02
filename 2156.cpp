#include <iostream>
#include <algorithm>
using namespace std;
int dp[10003] = { 0, };
int q[10003];
int main() {
	int n;
	cin >> n;
	for (int i = 3; i < n+3; i++)cin >> q[i];
	for (int i = 3; i < n + 3; i++) {
		dp[i] = max(dp[i-1], q[i] + max(q[i - 1] + dp[i - 3], dp[i - 2]));
	}

	cout << dp[n+2] << endl;
}