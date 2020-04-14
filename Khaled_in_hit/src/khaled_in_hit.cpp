#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	long int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int N;
		int x[3] = { 90, 75, 60 };
		cin >> N;
		int m[N] = { };
		for (int j = 0; j < N; j++) {
			cin >> m[j];
		}
		sort(m, m + N);
		int s[N] = { };
		for (int j = 0; j < N; j++) {
			s[j] = m[N - j - 1];
		}
		for (int j = 0; j < 3; j++) {
			x[j] = s[((j + 1) * (N / 4)) - 1];
		}
		int g[4] = { };
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < 4; k++) {
				if (k == 3) {
					g[3]++;
					break;
				}
				if ((m[j] - x[k]) >= 0) {
					g[k]++;
					break;
				}
			}
		}
		for (int j = 0; j < 4; j++) {
			if (g[j] != (N / 4)) {
				cout << "-1" << endl;
				break;
			}
			if (j == 3) {
				for (int k = 0; k < 3; k++) {
					if (k == 2) {
						cout << x[0] << endl;
					} else {
						cout << x[2 - k] << " " << flush;
					}
				}
			}
		}

	}
	return 0;
}

