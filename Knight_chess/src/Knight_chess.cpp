//============================================================================
// Name        : Knight_chess.cpp
// Author      : vidhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		long int N;
		cin >> N;
		int a[N + 1][2] = { };
		for (int i = 0; i < (N + 1); i++) {
			for (int j = 0; j < 2; j++) {
				cin >> a[i][j];
			}
		}
		long int b[9][3] = { { a[N][0] + 1, a[N][1] - 1, 0 }, { a[N][0] + 1, a[N][1]
				+ 1, 0 }, { a[N][0] - 1, a[N][1] + 1, 0 }, { a[N][0] - 1,
				a[N][1] - 1, 0 }, { a[N][0], a[N][1] - 1, 0 }, { a[N][0],
				a[N][1] + 1, 0 }, { a[N][0] + 1, a[N][1], 0 }, { a[N][0] - 1,
				a[N][1], 0 }, { a[N][0], a[N][1], 0 } };

		for (int i = 0; i < N; i++) {
			long int c[8][2] = { { a[i][0] + 2, a[i][1] - 1 }, { a[i][0] + 2, a[i][1]
					+ 1 }, { a[i][0] - 2, a[i][1] + 1 }, { a[i][0] - 2, a[i][1]
					- 1 }, { a[i][0] + 1, a[i][1] + 2 }, { a[i][0] - 1, a[i][1]
					+ 2 }, { a[i][0] + 1, a[i][1] - 2 }, { a[i][0] - 1, a[i][1]
					- 2 } };
			for (int j = 0; j < 9; j++) {
				if(b[j][2] == 1){
					continue;
				}
				for (int k = 0; k < 8; k++) {
					if ((b[j][0] == c[k][0]) & (b[j][1] == c[k][1])) {
						b[j][2] = 1;
						break;
					}
				}
			}
		}
		if (b[8][2] == 0) {
			cout << "NO" << endl;
		} else {
			for (int i = 0; i < 8; i++) {
				if (b[i][2] == 0) {
					cout << "NO" << endl;
					break;
				}
				if (i == 7) {
					cout << "YES" << endl;
				}
			}
		}
	}

	return 0;
}
