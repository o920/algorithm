#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a==0&&b==0) break;
		else if (a > b) {
			if (a%b == 0) cout << "multiple" << endl;
			else cout << "neither" << endl;
		}
		else if (a < b) {
			if (b%a == 0) cout << "factor" << endl;
			else cout << "neither" << endl;
		}
	}
}
