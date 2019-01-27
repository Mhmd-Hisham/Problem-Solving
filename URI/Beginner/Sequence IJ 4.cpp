#include <bits/stdc++.h>

using namespace std;

double I = 0, J = 1;

int main () {
	while (I<2){
		for (int i = 0; i < 3; i++)
			cout << "I=" << setprecision(2) << I << " J=" << J+i << '\n';
		I+= .2;
		J+= .2;
	}

	return 0;
}
/*
input:-
-----------


output:-
-----------
 	
I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?


Problem: 
*/
