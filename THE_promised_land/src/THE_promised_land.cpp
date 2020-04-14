//============================================================================
// Name        : THE_promised_land.cpp
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
		int z = 0;
		int a[5] = { };
		for (int j = 0; j < 5; j++) {
			cin >> a[j];
		}
		int b[a[2] + 2] = { };
		b[a[2] + 1] = (a[0] + 1);
		b[0] = 0;
		for (int j = 1; j < (a[2] + 1); j++) {
			cin >> b[j];
		}
		int c[a[3] + 2] = { };
		c[a[3] + 1] = (a[1] + 1);
		c[0] = 0;
		for (int j = 1; j < (a[3] + 1); j++) {
			cin >> c[j];
		}
		for (int j = 1; j < (a[2] + 2); j++) {
			for (int k = 1; k < (a[3] + 2); k++) {
				z = z
						+ (((b[j] - b[j - 1] - 1) / a[4])
								* ((c[k] - c[k - 1] - 1) / a[4]));
			}
		}
		cout << z << endl;
	}

	return 0;
}
