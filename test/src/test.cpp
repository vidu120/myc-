#include <bits/stdc++.h>
using namespace std;
int triangle(int a, int b, int c) {
	if (a == b)
		return c + 1;
	else
		c += a - b + 1;
	triangle(a - 1, b, c);
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int l, k, s;
		cin >> l >> k;
		if (k > l)
			s = 0;
		else
			s = l - k + 1;
		cout << "Case " << i + 1 << ": " << (s * (s + 1)) / 2 << endl;

	}
	return 0;
}