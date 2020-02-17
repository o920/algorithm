#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> n;
int m[500000];
int main() {
	int N, M, a;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		n.push_back(a);
	}
	sort(n.begin(), n.end());
	cin >> M;
	for (int i = 0; i < M; i++) cin >> m[i];



	for (int i = 0; i < M; i++) {
		int low = 0, high = N - 1;
		bool check = false;
		while (low <= high) {
			int middle = (low + high) / 2;
			if (n[middle] == m[i]) {
				check = true;
				break;
			}
			else if (n[middle] < m[i]) low = middle + 1;
			else high = middle - 1;
		}
		if (check) cout << "1 ";
		else cout << "0 ";
	}

}