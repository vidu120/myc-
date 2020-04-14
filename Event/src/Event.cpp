#include <iostream>
using namespace std;
int testCases() {
	int n;
	cin >> n;
	return n;
}
int main() {
	int n = testCases();
	while (n--) {
		string a[2] = { };
		int b[2] = { };
		cin >> a[0] >> a[1] >> b[0] >> b[1];
		string c[7] = { { "monday" }, { "tuesday" }, { "wednesday" }, {
				"thursday" }, { "friday" }, { "saturday" }, { "sunday" } };
		int dayposition[2] = { };
		for (int j = 0; j < 7; j++) {
			if (a[0] == c[j]) {
				dayposition[0] = j;
			}
			if (a[1] == c[j]) {
				dayposition[1] = j;
			}
		}
		int x = 0;
		int d = 0;
		int y = 0;
		if (dayposition[0] <= dayposition[1]) {
			y = dayposition[1] - dayposition[0] + 1;
		} else {
			y = 8 - (dayposition[0] - dayposition[1]);
		}
		for (int j = 0; true; j++) {
			x = y + 7 * j;
			if (x < b[0]) {
				continue;
			}
			if ((x >= b[0]) & (x <= b[1]) & (d != 1)) {
				d++;
				continue;
			}
			if ((d == 1) & (x >= b[0]) & (x <= b[1])) {
				cout << "many" << endl;
				break;
			}
			if ((d == 1) & (x > b[1])) {
				cout << (x - 7) << endl;
				break;
			}
			if ((d == 0) & (x > b[1])) {
				cout << "impossible" << endl;
				break;
			}
		}

	}

	return 0;
}
