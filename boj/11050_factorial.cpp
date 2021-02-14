// 이항계수 정의 그대로 구현
#include <iostream>
using namespace std;
int factorial(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++) a *= i;
	return a;
}
int bino(int n, int k) {
	return factorial(n) / (factorial(k)*factorial(n - k));
}
int main() {
	int n, k;
	cin >> n >> k;
	cout << bino(n, k);
}
