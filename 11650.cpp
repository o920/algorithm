#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> p[200000];
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> p[i].first >> p[i].second;
	sort(&p[0], &p[N], compare);
	for (int i = 0; i < N; i++) cout << p[i].first << " " << p[i].second << "\n";
}