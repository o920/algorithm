#include <iostream>
#include <algorithm>
using namespace std;
char arr1[1001], arr2[1001];
int dp[1001][1001], i, j;
int main() {
	cin >> arr1+1 >> arr2+1;
	for (i = 1; arr1[i]; i++) {
		for (j = 1; arr2[j]; j++) {
			dp[i][j] = max({ dp[i][j - 1],dp[i - 1][j],dp[i - 1][j - 1] + (arr1[i] == arr2[j]) });
		}
	}
	cout << dp[i - 1][j - 1] << endl;
}
