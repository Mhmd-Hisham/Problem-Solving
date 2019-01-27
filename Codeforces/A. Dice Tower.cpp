#include <bits/stdc++.h>
/*
Problem: A. Dice Tower
Link   : https://codeforces.com/contest/225/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

bool possible = true;
int N, x, a, b;

int main () {
	scanf("%d\n", &N);
	scanf("%d\n", &x);
    
	while ( N-- ){
	    scanf("%d %d\n", &a, &b);

	    if ((7-x == a || 7-x == b || 7-x == 7-a || 7-x == 7-b) ||
	        (  x == a ||   x == b ||  x == 7-a  ||  x == 7-b ) ){
	        possible = false;
	        break;
	    }
	    
	}


	printf( (possible)? "YES\n" : "NO\n" );
	return 0;
}
/*
Sample input:-
------------------
3
3
2 6
4 1
5 3

Sample output:-
-----------------
YES

Resources:-
-------------

Explanation:
---------------

*/
