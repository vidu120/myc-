//============================================================================
// Name        : Rupsa_Game.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		long long N;
		long long z = 1000000000 + 7;
		cin >> N;
		long long a[N + 1] = { };
		for (long long j = 0; j < (N + 1); j++) {
			cin >> a[j];
		}
		long long c = 0;
		long long d = 0;
		for (long long j = 0; (j < N); j++) {
			d = 0;
			for (long long k = (j + 1); k < (N + 1); k++) {
				if (j == 0) {
					c = c + ((a[j] * a[k]) * pow(2, N - d));
					d++;
				} else {
					c = c + ((a[j] * a[k]) * pow(2, N - 1 - d));
					d++;
				}
			}
		}
		cout << c % z << endl;
	}

	return 0;
}
