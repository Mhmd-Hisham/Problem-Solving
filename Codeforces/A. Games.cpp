#include <bits/stdc++.h>
/*
Problem: A. Games
Link   : https://codeforces.com/contest/268/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, T = 0;
int event = 0;
int teams[31][2];

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	scanf("%d\n", &N);

	for (int i = 0; i < N; i++){
    	scanf("%d %d\n", &teams[i][0], &teams[i][1]);
	}
    
    // Brute-force :D
	for (int i = 0; i < N; i++){
	    for (int j = 0; j < N; j++){
	        if (i == j) continue;
	        if (teams[i][0] == teams[j][1]) event++;
	    }
	}

	printf("%d\n", event);
	return 0;
}
/*
input:-
-----------
4
100 42
42 100
5 42
100 5

output:-
-----------
5

Resources:-
-------------

*/
