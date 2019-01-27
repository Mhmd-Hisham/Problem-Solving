#include <bits/stdc++.h>

using namespace std;

int N = 0;
int i2 = 0;
int i3 = 0;

int main () {
	cin >> N;
	cout.setf(ios::fixed);
	
	for (int i = 1;i <= N; i++){
		i2 = i*i;
		i3 = i2*i;
		
		cout<< i << " " << i2 << " " << i3 << "\n";
	}

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
