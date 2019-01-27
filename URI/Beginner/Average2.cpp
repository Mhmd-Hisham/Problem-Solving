#include <bits/stdc++.h>
// formula : (Score1*weight1 + Score2*weight2.. )/ weights

using namespace std;

int main () {
	float A = 0, B = 0, C = 0,MEDIA = 0;
	
	cin >> A >> B >> C;
	
	MEDIA = ((A*2) + (B*3) + (C*5))/10;
	
	printf("MEDIA = %.1f\n", MEDIA);
	return 0;
}
/*
input :-
----------
1-
5.0
6.0
7.0

2-
5.0
10.0
10.0

3-
10.0
10.0
5.0

output :-
-----------
1 - MEDIA = 6.3
2 - MEDIA = 9.0
3 - MEDIA = 7.5

https://www.urionlinejudge.com.br/judge/en/problems/view/1006


*/
