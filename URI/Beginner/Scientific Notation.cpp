#include <bits/stdc++.h>

using namespace std;

string s;
long double N = 0;

int main () {
	cin >> s;
	stringstream (s) >> N;
	
	printf("%s%.4LE\n" ,((s[0] == '-')? "":"+"),N);
	return 0;
}
/*
input:-
-----------
3.141592
1.618033
602214085774747474747474
-10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

output:-
-----------
+3.1416E+00
+1.6180E+00
+6.0221E+23
-1.0000E+100
Problem: 
*/
