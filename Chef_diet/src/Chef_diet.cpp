//============================================================================
// Name        : Chef_diet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a[2] = { };
		cin >> a[0] >> a[1];
		int b[a[0]] = { };
		for (int j = 0; j < a[0]; j++) {
			cin >> b[j];
		}
		int c = 0;
		for (int j = 0; j < a[0]; j++) {
			if ((c + b[j]) >= a[1]){
				c = (c + b[j]) - a[1];
				if( j == (a[0] - 1)){
					cout <<"YES"<<endl;
				}

			}else{
				cout <<"NO"<<" "<<(j+1)<<endl;
				break;
			}
		}

	}

	return 0;
}
