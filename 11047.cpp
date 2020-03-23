#include <iostream>
using namespace std;
int N[10];
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> N[i];
	int count = 0;
	for (int i = n-1; i >= 0; i--) {
		if (k == 0) break;
		count = count + k / N[i];
		k = k % N[i];
	}
	cout << count << endl;
}