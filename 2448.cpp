#include <iostream>
using namespace std;

char star[4000][8000];

void tri(int n, int y, int x) {
	if (n == 3) {
		star[y][x] = '*';
		star[y+1][x+1] = '*';
		star[y+1][x-1] = '*';
		star[y+2][x-2] = '*';
		star[y+2][x-1] = '*';
		star[y+2][x] = '*';
		star[y+2][x+1] = '*';
		star[y+2][x+2] = '*';
		return;
	}
	tri(n/2, y, x);
	tri(n/2, y+(n/2), x-(n/2));
	tri(n/2, y+(n/2), x+(n/2));
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N; j++) {
			if (j == 2 * N - 1) star[i][j] = '\0';
			else star[i][j] = ' ';
		}
	}
	tri(N, 0, N-1);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			cout << star[i][j];
		}
		cout << endl;
	}
}