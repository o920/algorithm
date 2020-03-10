#include <iostream>
using namespace std;
int table[2][50] = { 0, };
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> table[0][i] >> table[1][i];
	int G[50];
	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 0; j < N; j++) {
			if ((table[0][j] > table[0][i]) && (table[1][j] > table[1][i])) count++;
		}
		G[i] = count+1;
	}
	for (int i = 0; i < N; i++) cout << G[i] << " ";
	cout << endl;
}
