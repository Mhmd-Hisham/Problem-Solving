#include <bits/stdc++.h>

using namespace std;

double A = 0, B = 0, C = 0, D = 0;
double average = 0, exam = 0;

int main () {
	cin >> A >> B >> C >> D;
	
	average = (A*2 + B*3 + C*4 + D )/10;
	if ((average < 7.0) and (average >= 5.0)) {
		cin >> exam;
		printf("Media: %.1f\n", average);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n", exam);
		average = (average+exam )/2;
		if ( average >= 5.0 ) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		
		printf("Media final: %.1f\n", average);
	}
	else{ // Shit!!
		printf("Media: %.1f\n", average);
		if (average >= 7.0) {printf("Aluno aprovado.\n");}
		else if ( average < 5.0 ) {printf("Aluno reprovado.\n");}
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
