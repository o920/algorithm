#include <iostream>
using namespace std;

int max = 0;
int dp[1001] = {}, n[1001] = {};

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> n[i];
	for (int i = 1; i <= N; i++) {
		int min = 0;
		for (int j = 0; j < i; j++) {
			if (n[i] > n[j]) {
				if (min < dp[j]) min = dp[j];
			}
		}
		dp[i] = min + 1;
		if (max < dp[i]) max = dp[i];
	}
	cout << max;
}
