#include <iostream>
#include <cmath>
using namespace std;
int gcd(int n, int m) {
	while (m) {
		int temp = abs(n%m);
		n = m;
		m = temp;
	}
	return n;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl << (a*b) / gcd(a, b) << endl;
}