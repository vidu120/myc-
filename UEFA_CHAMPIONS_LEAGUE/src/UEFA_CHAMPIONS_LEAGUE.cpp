#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long int b[12][2] = { };
		string a[12][3] = { };
		for (int j = 0; j < 12; j++) {
			cin >> a[j][0] >> b[j][0] >> a[j][1] >> b[j][1] >> a[j][2];
		}
		long int e[12][2] = { };
		for (int j = 0; j < 12; j++) {
			e[j][0] = b[j][0];
			e[j][1] = b[j][1];
		}
		long int points[12][2] = { };
		for (int j = 0; j < 12; j++) {
			if (b[j][0] > b[j][1]) {
				points[j][0] = 3;
				points[j][1] = 0;
			} else if (b[j][0] == b[j][1]) {
				points[j][0] = 1;
				points[j][1] = 1;
			} else {
				points[j][0] = 0;
				points[j][1] = 3;
			}
		}
		string team[4][2] = { };
		long int finalpoints[4][2] = { };
		long int goalsd[4][2] = { };
		int c = 0;
		for (int j = 0; j < 12; j++) {
			goalsd[c][0] = (e[j][0] - e[j][1]);
			finalpoints[c][0] = points[j][0];
			for (int k = 0; k < 12; k++) {
				if (a[j][0] == "x") {
					break;
				}
				if (j == k) {
					continue;
				}
				if (a[j][0] == a[k][0]) {
					goalsd[c][0] = goalsd[c][0] + (e[k][0] - e[k][1]);
					finalpoints[c][0] = finalpoints[c][0] + points[k][0];
					team[c][0] = a[j][0];
					a[k][0] = "x";
				}
				if (k == 11) {
					c++;
				}
			}
		}
		c = 0;
		for (int j = 0; j < 12; j++) {
			goalsd[c][1] = (e[j][1] - e[j][0]);
			finalpoints[c][1] = points[j][1];
			for (int k = 0; k < 12; k++) {
				if (a[j][2] == "x") {
					break;
				}
				if (j == k) {
					continue;
				}
				if (a[j][2] == a[k][2]) {
					goalsd[c][1] = goalsd[c][1] + (e[k][1] - e[k][0]);
					finalpoints[c][1] = finalpoints[c][1] + points[k][1];
					team[c][1] = a[j][2];
					a[k][2] = "x";
				}
				if (k == 11) {
					c++;
				}
			}
		}
		long int finalpoints2[4] = { };
		long int finalpoints3[4] = { };
		long int finalgoalsd[4] = { };
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				if (team[j][0] == team[k][1]) {
					finalpoints2[j] = finalpoints[j][0] + finalpoints[k][1];
					finalgoalsd[j] = goalsd[j][0] + goalsd[k][1];
					break;
				}
			}
		}
		for (int j = 0; j < 4; j++) {
			finalpoints3[j] = finalpoints2[j];
		}
		sort(finalpoints3, finalpoints3 + 4);
		int m = 0;
		int t[4] = { };
		for (int k = 0; k < 4; k++) {
			if (finalpoints3[0] == finalpoints2[k]) {
				t[m] = k;
				m++;
			}
		}
		if (m ==1) {
			cout << team[t[0]][0] << " " << flush;
		}else if(m == 2){
			if (finalgoalsd[t[0]] > finalgoalsd[t[1]]){
				cout<<team[t[0]][0]<<" "<<flush;
			}else{
				cout<<team[t[1]][0]<<" "<<flush;
			}
		}else if(m==3){

		}

	}

	return 0;
}
