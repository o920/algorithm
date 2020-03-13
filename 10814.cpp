#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
pair<int, string> p[100000];
bool compare(const pair<int, string>& a, const pair<int, string>& b) {
	return a.first < b.first;
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> p[i].first >> p[i].second;
	stable_sort(&p[0], &p[N], compare);
	for (int i = 0; i < N; i++) cout << p[i].first << " " << p[i].second << "\n";
}