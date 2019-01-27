#include <bits/stdc++.h>

using namespace std;

int N = 0, t = 0;

int main () {
	
	for (int i = 0; i < 5; i++){
		cin >> t;
		if (t%2 == 0){N++;}
	}
	
	printf("%d valores pares\n", N);
	return 0;
}

