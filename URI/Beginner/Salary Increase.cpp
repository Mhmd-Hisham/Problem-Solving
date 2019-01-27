#include <bits/stdc++.h>

using namespace std;

int main () {
	double salary = 0, earned = 0;
	cin >> salary;
	int percentage = 0;
	
	if (salary <= 400.00)
		{earned = ((salary/100.0)*15.0);percentage = 15;}

	else if (salary <= 800.00)
		{earned = ((salary/100.0)*12.0);percentage = 12;}
	
	else if (salary <= 1200.00)
		{earned = ((salary/100.0)*10.0);percentage = 10;}

	else if (salary <= 2000.00)
		{earned = ((salary/100.0)*7.0);percentage = 7;}

	else {earned = ((salary/100.0)*4.0);percentage = 4;}

	salary += earned;
	printf("Novo salario: %.2f\n", salary);
	printf("Reajuste ganho: %.2f\n", earned);
	printf("Em percentual: %d %%\n", percentage);

	return 0;
}
/*
input:-
-----------


output:-
-----------



Problem: 
*/
