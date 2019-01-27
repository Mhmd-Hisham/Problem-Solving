#include <bits/stdc++.h>

using namespace std;


int main () {
	int A = 0, B = 0, C = 0, D = 0;
	cin >> A >> B >> C >> D;

	if ((B > C) and (D > A) and (C+D > A+B) and (C > 0) and (D > 0) and (A%2 == 0))
		printf("Valores aceitos\n");

	else
		printf("Valores nao aceitos\n");

	return 0;
}
/*
input:-
-----------


output:-
-----------

https://www.urionlinejudge.com.br/judge/en/problems/view/1035





Problem: 
*/
