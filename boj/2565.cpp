#include <iostream>
#include <algorithm>
using namespace std;

int dp[102];
pair<int, int> p[102];
bool compare(pair<int, int> a, pair<int, int>b) {
	return a.first < b.first;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> p[i].first >> p[i].second;
	sort(p, p + n + 1, compare);
	int result = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			if (p[i].second > p[j].second && dp[j] >= dp[i]) dp[i] = dp[j] + 1;
		}
		result = max(result, dp[i]);
	}
	//for (int i = 1; i <= n; i++) cout << dp[i] << endl;
	cout << n - result << endl;
}
