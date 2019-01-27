#include <bits/stdc++.h>

using namespace std;

long int A[3];
string answer = "Invalido";

int main () {
	cin >> A[0] >> A[1] >> A[2];
	
	sort(A,A+3);
	if ((A[0] + A[1]) > A[2]){
		answer = "Valido-";
		if (A[0] == A[1] && A[1] == A[2])
			answer += "Equilatero";

		else if (A[0] != A[1] && A[1] != A[2])
			answer += "Escaleno";

		else
			answer += "Isoceles";
		
		answer += "\nRetangulo: ";
		if (((A[0]*A[0]) + A[1]*A[1]) == (A[2]*A[2]))
			answer += "S";
		else
			answer += "N";
	}
	
	cout << answer << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
