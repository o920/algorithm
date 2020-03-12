#include <iostream>
using namespace std;
int arr[10001] = { 0, };
int main() {
	//이거 안쓰면 시간초과 --------
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//----------------------------
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr[temp]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 1; j <= arr[i]; j++) cout << i << "\n"; // endl 시간초과
	}
}