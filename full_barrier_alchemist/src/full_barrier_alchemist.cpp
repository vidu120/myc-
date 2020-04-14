//============================================================================
// Name        : full_barrier_alchemist.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a[5] = { };
		for (int j = 0; j < 5; j++) {
			cin >> a[j];
		}
		int b[a[0]][2] = { };
		for (int j = 0; j < a[0]; j++) {
			for (int k = 0; k < 2; k++) {
				cin >> b[j][k];

			}
		}
		for (int j = 0; (j < a[0]); j++) {
			if ((b[j][0] == 2) & (a[3] < b[j][1])) {
				a[4] = a[4] - 1;
			}
			if ((b[j][0] == 1) & ((a[1] - a[2]) > (b[j][1]))) {
				a[4] = a[4] - 1;
			}
			if (a[4] == 0) {
				cout << j << endl;
				break;
			}
			if (j == a[0] - 1) {
				cout << a[0] << endl;
			}
		}
	}

	return 0;
}
