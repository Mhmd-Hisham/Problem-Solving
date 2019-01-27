#include <bits/stdc++.h>

using namespace std;

int main () {
	float A,B,MEDIA;
	
	cin >> A >> B;
	
	MEDIA = ((A*3.5) + (B*7.5))/11;
	
	printf("MEDIA = %.5f\n", MEDIA);
	return 0;
}
/*
input :-
----------
1-
5.0
7.1

2-
0.0
7.1

3-
10.0
10.0

output :-
-----------
1 - MEDIA = 6.43182
2 - MEDIA = 4.84091
3 - MEDIA = 10.00000

https://www.urionlinejudge.com.br/judge/en/problems/view/1005


help: http://www.rapidtables.com/calc/math/weighted-average-calculator.htm
*/
