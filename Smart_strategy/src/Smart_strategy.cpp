//============================================================================
// Name        : Smart_strategy.cpp
// Author      : vidhan
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
		long int a[2] = { };
		cin >> a[0] >> a[1];
		long int X[(a[0] + a[1])] = { };
		for (int i = 0; i < (a[0] + a[1]); i++) {
			cin >> X[i];
		}
		for (int i = 0; i < a[1]; i++) {
			for (int j = 0; j < a[0]; j++) {
				X[a[0] + i] = X[a[0] + i] / X[j];
			}
			cout << X[a[0] + i] << " " << flush;
		}
		cout << endl;
	}
	return 0;
}
