//============================================================================
// Name        : Make_it.cpp
// Author      : vidhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

int main() {
	int a[3] = { };
	cin >> a[0] >> a[1] >> a[2];
	int taxes[a[0]] = { };
	for (int i = 0; i < a[0]; i++) {
		cin >> taxes[i];
	}
	int query[a[1]][2] = { };
	for (int i = 0; i < a[1]; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> query[i][j];
		}
	}
	for (int i = 0; i < a[1]; i++) {
		int c = a[0] - (query[i][1] - query[i][0] + 1);
		int taxes101[c] = { };
		for (int j = 0; j < c; j++) {
			if ((j + 1) < query[i][0]) {
				taxes101[j] = taxes[j];
				continue;
			}
			if ((j + 1) >= query[i][0]) {
				taxes101[j] = taxes[j + a[0] - c];
				continue;
			}
		}
		sort(taxes101, taxes101 + c);
		int sumsd[true][2] = { };
		for (int j = 0; true; j++) {
			for (int k = 0; k < c; k++) {
				sumsd[j][0] = sumsd[j][0] + taxes101[k];
				if ((k == c - 1) & (sumsd[j] % a[2] == 0)) {
					sumsd[j][1] = 1;
				}
			}
		}

	}

	return 0;
}
