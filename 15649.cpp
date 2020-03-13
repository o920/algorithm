#include <iostream>
using namespace std;
int arr[9];
bool visited[9];
void solution(int n, int m, int count) {
	if (count == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[count] = i;
			solution(n, m, count + 1);
			visited[i] = false;
		}
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	solution(N, M, 0);
}