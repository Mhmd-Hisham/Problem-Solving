#include <bits/stdc++.h>

using namespace std;

long long int N = 0, t = 0, sw = -2;
long long int total = 0;
long long int attacked = 0;
long long int stolen = 0;

int main () {
	cin >> N;
	long long int A[N], p = 0, i = 0;
	
	for (i = 0;i < N; i++){
		cin >> A[i];
		total += A[i];
	}
	
	i = 0;
	while ( i < N && i > -1){
		t = i;
		if ((A[i])%2 == 0) {i--; sw = (sw > i)? -1 : i;}
		else {i++;}

		if (A[t]) {stolen++; A[t]--; attacked += (sw == -2)? 1 : 0;}

	}
	attacked += (sw%2 == 0)? 0 : 1;

	cout << attacked << " " << total-stolen << '\n';
	return 0;
}
/*
input:-
-----------
**********************************************************
8
1 3 5 7 11 13 17 19 = 76

i = 0: 1 --> 0; i = i+1!
i = 1: 3 --> 2; i = i+1!
i = 2: 5 --> 4; i = i+1!
i = 3: 7 --> 6; i = i+1!
i = 4: 11 --> 10; i = i+1!
i = 5: 13 --> 12; i = i+1!
i = 6: 17 --> 16; i = i+1!
i = 7: 19 --> 18; i = i+1!

stolen = 8
non-stolen = 76-8 = 68
**********************************************************
8
1 3 5 7 11 13 16 19


i = 0: 1 --> 0; i = i+1!
i = 1: 3 --> 2; i = i+1!
i = 2: 5 --> 4; i = i+1!
i = 3: 7 --> 6; i = i+1!
i = 4: 11 --> 10; i = i+1!
i = 5: 13 --> 12; i = i+1!

i = 6: 16 --> 15; i = ( i-1 )
i = 5: 12 --> 11; i = ( i-1 )
i = 4: 10 --> 9;  i = ( i-1 )
i = 3: 6 --> 5;   i = ( i-1 )
i = 2: 4 --> 3;   i = ( i-1 )
i = 1: 2 --> 1;   i = ( i-1 )
i = 0: ----------------------



------->> 7 63



output:-
-----------

8 68


Problem: 
*/
