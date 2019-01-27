#include <bits/stdc++.h>
/*
Problem: A. Shaass and Oskols
Link   : https://codeforces.com/contest/294/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int n, lines[101], m;
int linex, shotx;

int main () {
	scanf("%d\n", &n);
	
	for (int i = 0; i < n; i++){
    	scanf("%d", &lines[i]);
	}

	scanf("%d\n", &m);

	for (int i = 0; i < m; i++){
    	scanf("%d %d\n", &linex, &shotx);

    	linex--;// convert to index

        if (lines[linex]){
            if (linex-1 > -1) lines[linex-1] += shotx-1;
            if (linex+1 < n) lines[linex+1] += lines[linex]-shotx;
        	lines[linex] = 0;
        }
	}

	for (int i = 0; i < n; i++){
    	printf("%d\n", lines[i]);
	}

	return 0;
}
/*
input:-
-----------
5
10 10 10 10 10
5
2 5
3 13
2 12
1 13
4 6

output:-
-----------
0
12
5
0
16

Resources:-
-------------

*/
