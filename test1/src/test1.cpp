//============================================================================
// Name        : test1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int m[4][2] = { { 12, 1 }, { 23, 2 }, { 12, 3 }, { 9, 4 } };
	sort(m[], m[] + 4);
	for (int j = 0; j < 4; j++) {
		for (int k = 0; k < 2; k++) {
			if (k == 0) {
				cout << m[j][k] << " " << flush;
			} else {
				cout << m[j][k] << endl;
			}
		}
	}

	return 0;
}
