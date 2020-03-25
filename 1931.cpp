#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> time[100000];
int compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> time[i].first >> time[i].second;
	sort(time, time+n, compare);
	int count = 0, end = 0;
	for (int i = 0; i < n; i++) {
		if (end <= time[i].first) {
			end = time[i].second;
			count++;
		}
	}
	cout << count << endl;
}