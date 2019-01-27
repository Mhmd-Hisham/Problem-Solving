#include <bits/stdc++.h>
/*
Problem: A. Presents
Link   : https://codeforces.com/contest/136/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int n = 0;
int presents[101], idx;

int main () {
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++){
    	scanf("%d", &idx);
    	presents[idx-1] = i+1;
	}

	for (int i = 0; i < n; i++){
    	printf("%d ", presents[i]);
	}

	return 0;
}
/*
input:-
-----------
4
2 3 4 1

output:-
-----------
4 1 2 3

Resources:-
-------------

*/
