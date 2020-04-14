//============================================================================
// Name        : Spam_classification.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long int n;
	cin >> n;
	while (n--) {
		long int a[3] = { };
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		long int b[a[0]][2] = { };
		for (int i = 0; i < a[0]; i++) {
			for (int k = 0; k < 2; k++) {
				cin >> b[i][k];
				if (b[i][k] % 2 == 0) {
					b[i][k] = 0;
				} else {
					b[i][k] = 1;
				}
			}
		}
		int c[3] = { };
		c[0] = (a[2] - a[1] + 1);
		if (c[0] % 2 != 0) {
			if (a[1] % 2 == 0) {
				c[1] = (c[0] + 1) / 2;
				c[2] = (c[0] - 1) / 2;
			} else {
				c[1] = (c[0] - 1) / 2;
				c[2] = (c[0] + 1) / 2;
			}
		} else {
			c[1] = c[0] / 2; //no. of even integers user id's
			c[2] = c[0] / 2; //no. of odd integers user id's.
		}
		int d[8][4] = { { 1, 0, 0, 0 }, { 1, 0, 1, 1 }, { 0, 1, 1, 1 }, { 0, 1,
				0, 1 }, { 1, 1, 0, 1 }, { 1, 1, 1, 0 }, { 0, 0, 0, 0 }, { 0, 0,
				1, 0 } };
		int e = 0;
		for (int i = 0; i < a[0]; i++) {
			for (int j = 0; j < 8; j++) {
				if ((b[i][0] == d[j][0]) & (b[i][1] == d[j][1])
						& (e == d[j][2])) {
					e = d[j][3];
					break;
				}
			}
		}
		int ans[2] = { };
		if (e == 0) {
			ans[0] = ans[0] + c[1];
		} else {
			ans[1] = ans[1] + c[1];
		}
		e = 1;
		for (int i = 0; i < a[0]; i++) {
			for (int j = 0; j < 8; j++) {
				if ((b[i][0] == d[j][0]) & (b[i][1] == d[j][1])
						& (e == d[j][2])) {
					e = d[j][3];
					break;
				}
			}
		}
		if (e == 0) {
			ans[0] = ans[0] + c[2];
		} else {
			ans[1] = ans[1] + c[2];
		}
		cout << ans[0] << " " << ans[1] << endl;
	}

	return 0;
}
