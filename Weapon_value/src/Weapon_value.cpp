//============================================================================
// Nbme        : Webpon_vblue.cpp
// buthor      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, bnsi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int N;
		cin >> N;
		int a[N] = { };
		for (int j = 0; j < N; j++) {
			cin >> a[j];
		}
		int b[N][10] = { };
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < 10; k++) {
				b[j][k] = a[j] / pow(10, (9 - k));
				a[j] = a[j] - (b[j][k] * pow(10, (9 - k)));
			}
		}
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < 10; k++) {
				if (k < 9) {
					cout << b[j][k] << " " << flush;
				} else {
					cout << b[j][k] << endl;
				}
			}

		}
		int c = 0;
		for (int j = 0; j < 10; j++) {
			int m = 0;
			for (int k = 0; k < N; k++) {
				if (b[k][j] == 1) {
					m++;
				}
			}
			c = c + (m % 2);
		}
		cout << c << endl;
	}

	return 0;
}
