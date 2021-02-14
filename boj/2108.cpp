#include<iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec(N);
	vector<int> vec2(8001, 0);
	int mean = 0, max=0;
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
		mean += vec[i];
		int temp = (vec[i] <= 0) ? abs(vec[i]) : vec[i] + 4000; // 음수면 배열 8000개 중 앞에, 양수면 뒤에 저장
		vec2[temp]++; // 입력받은 수가 몇개인지 세어놓기
		if (vec2[temp] > max) max = vec2[temp]; // 빈도 제일 많은 거 저장해놓기
	}
	sort(vec.begin(), vec.end()); 
	bool isSecond = false; // 빈도가 많은 거 중 두번째로 작은 수 알아내는 변수
	int mode = 0;
	for (int i = -4000; i <= 4000; i++) {
		int temp = i <= 0 ? abs(i) : i + 4000;
		if (vec2[temp] == max) { // if 문에 두번째 걸리면 두번째로 작은 수를 mode에 저장하고 반복문 빠져나오기
			mode = i;
			if (isSecond) break;
			isSecond = true;
		}
	}

	cout << round(mean / (double)N) << "\n";
	cout << vec[round(N / 2)] << "\n";
	cout << mode << "\n";
	cout << vec[vec.size()-1] - vec[0] << "\n";
}
