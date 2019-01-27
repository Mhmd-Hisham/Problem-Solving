#include <bits/stdc++.h>
/*
Problem: A. Next Round
Link   : https://codeforces.com/contest/158/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, k = 0;
int scores[51], advanced = 0;

int main () {
	scanf("%d %d\n", &N, &k);

	for (int i = 0; i < N; i++){
    	scanf("%d", &scores[i]);
	}

	for (int i = 0; i < N; i++){
    	if ( scores[i] >= scores[k-1]  && scores[i] > 0)
    	    advanced++;
	}

    printf("%d\n", advanced);
	return 0;
}
/*
input:-
-----------
8 5
10 9 8 7 7 7 5 5

output:-
-----------
6

Resources:-
-------------

*/
