#include <iostream>
#include <vector>
using namespace std;
vector<int> nums;
void merge(int start, int mid, int end) {
	vector<int> temp;
	int middle = mid + 1, st = start;
	while (start <= mid && middle <= end) {
		nums[start] > nums[middle] ? temp.push_back(nums[middle++]) : temp.push_back(nums[start++]);
	}
	while (start <= mid) temp.push_back(nums[start++]);
	while (middle <= end) temp.push_back(nums[middle++]);
	for (int i = st; i <= end; i++) nums[i] = temp[i - st];
}

void split(int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		split(start, mid);
		split(mid + 1, end);
		merge(start, mid, end);
	}
}

int main() {
	int n;
	cin >> n;
	nums.resize(n);
	for (int i = 0; i < n; i++) cin >> nums[i];
	split(0, n - 1);
	for (int i = 0; i < n; i++) cout << nums[i] << "\n"; // endlÀº ½Ã°£ ÃÊ°ú
}
