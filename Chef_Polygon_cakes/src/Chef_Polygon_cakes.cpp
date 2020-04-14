#include <iostream>
using namespace std;

int main() {
	long int n;
	cin >> n;
	while (n--) {
		long int a[3] = { };
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		long int N = 0;
		long int D = 0;
		N = (((a[0] - 2) * 180) - (a[0] * a[1]));
		D = (a[0] * (a[0] - 1)) / 2;
		N = a[1] * D + ((a[2] - 1) * N);
		long int l = D;
		for (int i = 0; i < D; i++) {
			if ((N % l == 0) & (D % l == 0)) {
				N = N / l;
				D = D / l;
				cout << N << " " << D << endl;
				break;
			}
			l = l - 1;
		}
	}
	return 0;
}
