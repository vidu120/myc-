//============================================================================
// Name        : hard_sequence.cpp
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
		int N;
		cin >> N;
		int a[N] = { };
		// Now we have to create the hard sequence until the specified N
		a[0] = 0;
		a[1] = 0;
		for (int j = 1; j < N; j++) {
			for (int k = 0; k < j; k++) {
				if (a[j] == a[j - k - 1]) {
					a[j + 1] = k + 1;
					break;
				}
				if (k == j - 1) {
					a[j + 1] = 0;
				}

			}
		}

		int m = 0;
		for (int j = 0; j < N; j++) {
			if (a[N - 1] == a[j]) {
				m++;
			}

		}
		cout << m << endl;

	}

	return 0;
}
