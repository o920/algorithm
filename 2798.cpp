#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	int C[100];
	cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> C[i];

	int m = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j+1; k < N; k++) {
				int sum = C[i] + C[j] + C[k];
				if (sum <= M) m = max(sum, m);
			}
		}
	}
	cout << m << endl;
}