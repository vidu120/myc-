//============================================================================
// Name        : chef_and_interesting_subsequences.cpp
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
		int a[3] = { };
		cin >> a[0] >> a[1];
		a[2] = a[0] - a[1];
		int b[a[0]] = { };
		for (int j = 0; j < a[0]; j++) {
			cin >> b[j];
		}
		int c[3] = { 1, 1, 1 };
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < a[j]; k++) {
				c[j] = c[j] * (a[j] - k);
			}
		}
		int m = 0;
		m = c[0] / (c[1] * c[2]);
		int d[m] = { };

// Driving mechanism of the code!!
		for (int j = 0; j < (a[2] - 1); j++) {
		for(int k = 0; k <) {
			for() {

			}
		}
	}

}

return 0;
}
