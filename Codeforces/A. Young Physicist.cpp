#include <bits/stdc++.h>
/*
Problem: A. Young Physicist
Link   : https://codeforces.com/contest/69/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;
int x = 0, y = 0, z = 0;
int xi = 0, yi = 0, zi = 0;

int main () {

	scanf("%d\n", &N);
	
	while ( N-- ){
    	scanf("%d %d %d\n", &xi, &yi, &zi);
	    x += xi;
	    y += yi;
	    z += zi;
	}

    if (x == 0 && y == 0 && z == 0)
        printf("YES");
    
    else
        printf("NO");

	return 0;
}
/*
input:-
-----------
3
4 1 7
-2 4 -1
1 -5 -3

output:-
-----------
NO

Resources:-
-------------

*/
