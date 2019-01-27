#include <bits/stdc++.h>

using namespace std;

int N;
char competitor[1001];
double D, S[7];

int main () {
	cin >> N;
	
	while ( N-- ){
		cin >> competitor >> D;
		cin >> S[0] >> S[1] >> S[2] >> S[3] >> S[4] >> S[5] >> S[6];		
		sort(S,S+7);
		printf("%s %.2f\n",competitor,(S[1]+S[2]+S[3]+S[4]+S[5])*D);
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
