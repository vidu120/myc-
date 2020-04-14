#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long int N;
		int ans = 0;
		cin >> N;
		int c = 0;
		for (int j = 1; j >= 1; j++) {
			c = N / (pow(10, j));
			if (c < 1) {
				c = j;
				break;
			}
		}
		int a[c] = { };
		for (int j = 0; j < c; j++) {
			a[j] = N / pow(10, (c - 1 - j));
			N = N - (a[j] * pow(10, (c - 1 - j)));
		}
		int b[c][c - 1] = { };
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < (c - 1); k++) {
				if (k < j) {
					b[j][k] = a[k];
				} else {
					b[j][k] = a[k + 1];
				}
			}
		}
		for (int j = 1; j < c; j++) {
			if (a[j] < a[j - 1]) {
				for (int k = 0; k < (c - 1); k++) {
					ans = ans + (b[j - 1][k] * pow(10, (c - 2 - k)));
				}
				break;
			}
			if (j == (c - 1)) {
				for (int k = 0; k < (c - 1); k++) {
					ans = ans + (b[c - 1][k] * pow(10, (c - 2 - k)));
				}
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
