//시발 개잘짰는데 왜 틀렸는지 모르겠다.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int W, D;
const int dx[8] = { -1,-1,-1,1,1,1,0,0 };
const int dy[8] = { -1,0,1,-1,0,1,-1,1 };
char board[8][8] = { 0 };

bool hasWord(int x, int y, const string& word) {
	if (x < 0 || y < 0 || x >= D || y >= D) return false;
	if (board[y][x] != word[0]) return false;

	if (word.size() == 1) return true;
	for (int direction = 0; direction < 8; ++direction) {
		int nextY = y + dy[direction];
		int nextX = x + dx[direction];
		if (board[y][x] == 'q') {
			if (word[0] == 'q' && word[1] == 'u' && word.size() >= 2) {
				if (hasWord(nextX, nextY, word.substr(2))) return true;
			}

		}
		else if (hasWord(nextX, nextY, word.substr(1))) return true;
	}
	return false;
}
int main() {
	
	cin >> W;

	vector<pair<string,bool>> arr;
	for (int i = 0; i < W; i++) {
		string temp;
		cin >> temp;

		arr.push_back({temp, false});
	}

	while (1) {
		for (int i = 0; i < W; i++) {
			arr[i].second = false;
		}
		cin >> D;

		if (D == 0) break;
		
		for (int i = 0; i < D; i++) {
			for (int j = 0; j < D; j++) {
				cin >> board[j][i]; 
			}
		}

		
		for (int i = 0; i < D; i++) {
			for (int j = 0; j < D; j++) {
				for (int k = 0; k < W; k++) {
					if (hasWord(i, j, arr[k].first)) {
						arr[k].second = true;
					}
				}
			}
		}

		for (int i = 0; i < W; i++) {
			if (arr[i].second == true) cout << arr[i].first << endl;
		}
		cout << "-" << endl;


	}
	

}
