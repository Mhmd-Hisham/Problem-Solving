#include <bits/stdc++.h>

using namespace std;

int I = 1, J = 7;

int main () {
	while (I<10){
		for (int i = 0; i < 3; i++)
			printf("I=%d J=%d\n",I,J-i);
		I+= 2;
	}

	return 0;
}
/*
input:-
-----------


output:-
-----------
I=1 J=7
I=1 J=6
I=1 J=5

I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5

Problem: 
*/
