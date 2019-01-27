#include <bits/stdc++.h>

using namespace std;

int N = 0;
double r = 0;
int x = 0, y = 0;
map<int,double> pp;

int main () {
	cin >> N;

	pp[1001] = 1.50;
	pp[1002] = 2.50;
	pp[1003] = 3.50;
	pp[1004] = 4.50;
	pp[1005] = 5.50;

	while ( N-- ){
		cin >> x >> y;
		r += pp[x] * y;
	}


	printf("%.2f\n", r);
	return 0;
}
/*
input:-
-----------
5
1001 500
1005 300
1003 23
1002 52
1004 44

output:-
-----------


Problem: 
*/
