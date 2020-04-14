#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		long int a[2] = { };
		cin >> a[0] >> a[1];
		long int b[a[0] + 1] = { };
		for (int i = 1; i < a[0] + 1; i++) {
			cin >> b[i];
		}
		long int ans = 0;
		for (int i = 1; i < a[0] + 1; i++) {
			if (b[i] - b[i - 1] <= a[1]) {
				continue;
			} else {
				ans = ans + ((b[i] - b[i - 1] - 1) / a[1]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
