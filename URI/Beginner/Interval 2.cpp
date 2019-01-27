#include <bits/stdc++.h>

using namespace std;

int N = 0, in = 0, t = 0;

int main () {
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> t;
		if ( (t>=10) && (t<=20) ) in++;
	}
	printf("%d in\n%d out\n",in,N-in);	
	return 0;
}
/*
input:-
-----------


output:-
-----------






Problem: 
*/
