#include <bits/stdc++.h>

using namespace std;

int x = 0;

int main () {
	cin >> x;
	while (x != 0){
		for (int i = 1; i < x; i++) cout << i << " ";
		cout << x << '\n';
		cin >> x;
	}

	return 0;
}

