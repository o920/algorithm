#include <iostream>
#include <algorithm>
using namespace std;


char input[50][50];

int solution(int x, int y) {
	int white = 0, black = 0;
	for (int i = x; i < x+8; i++) {
		for (int j = y; j < y+8; j++) {
			if (!((i + j) % 2) && input[i][j] == 'W') black++;
			if ((i + j) % 2 && input[i][j] == 'B') black++;
			if (!((i + j) % 2) && input[i][j] == 'B') white++;
			if ((i + j) % 2 && input[i][j] == 'W') white++;
		}
	}
	return min(white, black);
}

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> input[i][j];
		}
	}
	int m = 987654321;
	for (int i = 0; i + 7 < N; i++) {
		for (int j = 0; j + 7 < M; j++) {
			m = min(m, solution(i,j));
		}
	}
	cout << m << endl;
}
