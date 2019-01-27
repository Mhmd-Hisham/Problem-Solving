#include <bits/stdc++.h>
/*
Problem: A. Snacktower
Link   : https://codeforces.com/problemset/problem/767/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;

int main () {
	scanf("%d\n", &N);

    int snack;
    bool seen[N+1];

	int next = N;

    memset(seen, 0, sizeof(seen));
	for (int i = 0; i < N; i++){
		scanf("%d", &snack);
        seen[snack] = 1;

	    while (seen[next]){
	        printf("%d ", next);
	        next--;
	    }
	    printf("\n");
    }
    
	return 0;
}
/*
input:-
-----------
3
3 1 2

output:-
-----------
3 

2 1 


Resources:-
-------------

*/
