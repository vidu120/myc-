//============================================================================
// Name        : Compress_The_List.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// ALTHOUGH THIS PROGRAM SHOWED THAT THE TIME LIMIT EXCEEDED ,THIS IS ONE OF THE MOST
// DIFFICULT PROBLEMS THAT I HAVE SOLVED WITH THE KNOWLEDGE THAT I HAVE TILL NOW!!!
// PLEASE APPRECIATE MY HARD WORK!!
int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int N;
		cin >> N;
		int a[N] = { };
		for (int j = 0; j < N; j++) {
			cin >> a[j];
		}
		int c = 0;

		for (int j = 1; j < N; j = 1 + c) {
			if (j == N - 1) {
				cout << a[N - 2] << "," << a[N - 1] << endl;
				break;
			} else if (((a[j] - a[j - 1]) == 1) & ((a[j + 1] - a[j]) == 1)) {
				for (int k = j + 2; k < N; k++) {
					if (((a[N - 1] - a[N - 2]) != 1) & (k == N - 1)) {
						cout << a[j - 1] << "..." << a[N - 2] << "," << a[N - 1]
								<< endl;
						c = k;
						break;
					}
					if ((a[k] - a[k - 1]) != 1) {
						cout << a[j - 1] << "..." << a[k - 1] << "," << flush;
						c = k;
						break;
					}
					if (k == (N - 1)) {
						cout << a[j - 1] << "..." << a[N - 1] << endl;
						c = k;
						break;
					}
				}
			} else {
				cout << a[j - 1] << "," << flush;
				c = c + 1;
			}
		}

	}

	return 0;
}
