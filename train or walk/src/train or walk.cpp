//============================================================================
// Name        : train.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int cs[8] = { };
		for (int j = 0; j < 8; j++) {
			cin >> cs[j];
		}
		int d[cs[0]] = { };
		for (int k = 0; k < cs[0]; k++) {
			cin >> d[k];
		}
		int c;
		int k;
		c = abs(d[cs[2] - 1] - d[cs[1] - 1]) * cs[5];
		k = abs(d[cs[3] - 1] - d[cs[1] - 1]) * cs[5];
		if (k <= cs[7]) {
			k = cs[7] + (abs(d[cs[4] - 1] - d[cs[3] - 1]) * cs[6])
					+ (abs(d[cs[2] - 1] - d[cs[4] - 1]) * cs[5]);
			if (k <= c) {
				cout << k << endl;
			} else {
				cout << c << endl;
			}
		} else {
			cout << c << endl;
		}
	}
	return 0;
}
