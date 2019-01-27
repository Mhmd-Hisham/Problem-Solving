#include <bits/stdc++.h>

using namespace std;

long int i = 1;
long int x = 0, y = 0;

int main () {
	cin >> x >> y;
	cout.setf(ios::fixed);

	while ( i < y ){
		for (int j = 0; j < x-1; j++){
			cout << i << " ";
			i++;
		}
		cout << i << "\n";i++;
	}

	return 0;
}
// 3 99
