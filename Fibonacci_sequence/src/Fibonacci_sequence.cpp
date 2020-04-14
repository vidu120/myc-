//============================================================================
// Name        : Fibonacci_sequence.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
int testCases() {
	long int n;
	cin >> n;
	return n;
}
int lengthofsequence() {
	long int N;
	cin >> N;
	return N;
}
int main() {
	int n = testCases();
	for (long int i = 0; i < n; i++) {
		int N = lengthofsequence();
		long int a[N] = { };
		a[0] = 0;
		a[1] = 1;
		for (long int j = 2; j < N; j++) {
			a[j] = (a[j - 2] + a[j - 1]) % 10;
		}
		//now we have to take only the odd numbers until only one number is left !!
		// Here comes the most important part !!
		int c = 0;
		for (long int j = 1; true; j++) {
			c = N / (pow(2, j));
			if (c == 1) {
				c = j;
				break;
			}
		}
		long int ans = 0;
		ans = pow(2, c) - 1;
		cout << a[ans] << endl;
	}
	return 0;
}
