#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int first = 666;
	int count = 1;
	while (count != N) {
		int flag = 0;
		first++;
		int num = first;
		while (num) {
			int temp = num % 10;
			if (temp == 6) flag++;
			else if (flag < 3) flag = 0;
			num /= 10;
		}
		if (flag >= 3) count++;
	}
	cout << first << endl;
}