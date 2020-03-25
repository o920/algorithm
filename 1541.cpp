#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[51];
	cin >> arr;
	int len = strlen(arr);
	int sum = 0, temp = 0, n = 0;
	int ans[25] = {0,};
	for (int i = 0; i < len; i++) {
		if (arr[i] == '-') {
			sum += temp;
			ans[n] = sum;
			//- 전에 나온 숫자들의 합을 다 저장해줌
			n++;
			temp = 0;
			sum = 0;
		}
		else if (arr[i] == '+') {
			sum += temp;
			temp = 0;
		}
		else {
			temp *= 10;
			temp += (arr[i] - '0');
			// 연산자가 나오기 전 숫자 처리
		}
	}
	sum += temp;
	ans[n] = sum;
	int result = ans[0];
	for (int i = 1; i < n+1; i++) result -= ans[i];
	cout << result << endl;
}