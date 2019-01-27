#include <bits/stdc++.h>

using namespace std;

int main () {
	int A = 0, B = 0, C = 0;
	cin >> A >> B >> C;
	
	//we should use this formula: (a+b+abs(a-b))/2
	
	printf("%d eh o maior\n",max(C,max(A,B)));
	return 0;
}
/*
input:-
-----------


output:-
-----------


https://www.urionlinejudge.com.br/judge/en/problems/view/1013

*/
