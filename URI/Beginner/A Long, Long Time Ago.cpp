#include <bits/stdc++.h>

using namespace std;

long long int N = 0;
long long int t = 0;

int main () {
	cin >> N;
	
	while ( N-- ){
		cin >> t;
		t = 2015-t;
		printf("%lld %s\n",abs((t <= 0)? t-1: t), (t > 0)? "D.C." : "A.C." );
	}

	return 0;
}
/*
input:-
-----------
5
0
1
1007
2013
2014

5
2015
2016
1073740816
2147483647
2147483648

10
0
1
2
3
4
2000
2014
2015
2016
4015

5
2015
2016
1073740816
2147483647
2147483648

2147483648

output:-
-----------


Problem: 
*/
