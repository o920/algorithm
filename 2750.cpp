#include <iostream>
using namespace std;

int main() {
	int arr[1000];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) cout << arr[i] << endl;
}