#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int y[n] = { };
	for (int i = 0; i < n; i++) {
		int z = 0;
		int N;
		cin >> N;
		string t[N] = { };
		int b[N] = { };
		for (int j = 0; j < N; j++) {
			cin >> t[j];
			cin >> b[j];
		}
		for (int j = 0; j < N; j++) {
			int a[2] = { 1, 0 };
			for (int l = 0; l < N; l++) {
				if (t[j] == "x") {
					break;
				}

				if (j == l) {
					continue;
				}
				if ((t[j] == t[l]) & (b[j] == b[l])) {
					t[l] = "x";
					a[0]++;
				}
				if ((t[j] == t[l]) & (b[j] != b[l])) {
					t[l] = "x";
					a[1]++;
				}

			}
			if ((t[j] != "x") & (a[0] == 1) & (a[1] == 0)) {
				z = z + 1;

			}
			if ((a[0] > a[1]) & (a[0] != 1)) {
				z = z + a[0];
			} else {
				z = z + a[1];
			}
		}
		y[i] = z;
	}
	for (int i = 0; i < n; i++) {
		cout << y[i] << endl;
	}
	return 0;
}













