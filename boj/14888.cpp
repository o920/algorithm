#include <iostream>
#include <algorithm>
using namespace std;
int N, add, sub, mul, divi;
int num[100];
int maximum = -1000000000, minimum = 1000000000;
void dfs(int p, int m, int mu, int di, int count, int sum) {
	if (count == N) {
		maximum = max(maximum, sum);
		minimum = min(minimum, sum);
	}
	if (p > 0) dfs(p - 1,m, mu, di, count + 1, sum + num[count]);
	if (m > 0)dfs(p, m - 1, mu, di, count + 1, sum - num[count]);
	if (mu > 0)dfs(p, m, mu - 1, di, count + 1, sum*num[count]);
	if (di > 0)dfs(p, m, mu, di - 1, count + 1, sum / num[count]);
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) cin >> num[i];
	cin >> add >> sub >> mul >> divi;
	dfs(add, sub, mul, divi, 1, num[0]);

	cout << maximum << endl << minimum << endl;
}
