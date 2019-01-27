#include <bits/stdc++.h>
/*
Problem: A. Team Olympiad
Link   : https://codeforces.com/contest/490/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int n = 0, t = 0;
int teams;

int programming[5001], maths[5001], pe[5001];
int prog_idx = 0, math_idx = 0, pe_idx = 0;


int main () {
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++){
    	scanf("%d\n", &t);

    	if (t == 1) {programming[prog_idx] = i; prog_idx++;}
    	else if (t == 2) {maths[math_idx] = i; math_idx++;}
    	else {pe[pe_idx] = i; pe_idx++;}
	}

    teams = min(math_idx, pe_idx);
    teams = min(teams, prog_idx);

    printf("%d\n", teams);

    for (int i = 0; i < teams; i++){
        printf("%d %d %d\n", programming[i]+1, maths[i]+1, pe[i]+1);
    }

	return 0;
}
/*
input:-
-----------
7
1 3 1 3 2 1 2

output:-
-----------
2
3 5 2
6 7 4

Resources:-
-------------

*/
