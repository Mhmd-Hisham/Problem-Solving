#include <bits/stdc++.h>

using namespace std;

int main () {
	double N = 0;
	cin >> N;
	string interval = "";
	
	if ((N >= 0) and (N <= 100)){
		if ( N <= 25 ) interval = "[0,25]";
		else if ( N <= 50 ) interval = "(25,50]";
		else if ( N <= 75 ) interval = "(50,75]";
		else if ( N <= 100 ) interval = "(75,100]";
		cout << "Intervalo " << interval << "\n";
	}

	else printf("Fora de intervalo\n");
	
	return 0;
}

/*
input:-
-----------


output:-
-----------






Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1037
*/
