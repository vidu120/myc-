//============================================================================
// Name        : Dinosaur's_football.cpp
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
		int N[2] = { };
		cin >> N[0];
		cin >> N[1];
		int a[N[0]] = { };
		for (int j = 0; j < N[0]; j++) {
			a[j] = j + 1;
		}
		// now we want to reorder in such a way that we get the number of passes as N[1]
		int c = N[0] - 1;
		for (int j = 0; j < N[0] - 1; j++) {
			for (int k = 0; k < N[0]; k++) {
				a[k] = k + 1;
			}
			a[0] = j + 2;
			a[j + 1] = 1;
			c = c - 1;
			if (c == N[1]) {
				break;
			}
		}
		for (int j = 0; j < N[0]; j++) {
			if (j < N[0] - 1) {
				cout << a[j] << " " << flush;
			} else {
				cout << a[j] << endl;
			}
		}

	}

	return 0;
}
