//============================================================================
// Name        : ATM.cpp
// Author      : vidhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	long double Y;
	long int X;
	cin >> X >> Y;
	if (X % 5 != 0 || (X + 0.5) > Y) {
		cout << fixed << setprecision(2) << Y << endl;
	} else {
		Y = Y - X - 0.5;
		cout << fixed << setprecision(2) << Y << endl;
	}

	return 0;
}
