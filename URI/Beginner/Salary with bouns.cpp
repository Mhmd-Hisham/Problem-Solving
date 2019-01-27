#include <bits/stdc++.h>

using namespace std;

int main () {
	float salary = 0, sold = 0;
	string name;

	cin >> name >> salary >> sold;
	

	printf("TOTAL = R$ %.2f\n", salary+(sold*.15));

	return 0;
}
/*
input:-
-----------
JOAO
500.00
1230.30

1
200
20.50 

6
145
15.55

output:-
-----------

TOTAL = R$ 684.54


https://www.urionlinejudge.com.br/judge/en/problems/view/1009

*/
