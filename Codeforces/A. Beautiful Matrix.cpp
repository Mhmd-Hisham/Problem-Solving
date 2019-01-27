#include <bits/stdc++.h>
/*
Problem: A. Beautiful Matrix
Link   : https://codeforces.com/contest/263/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int x = 0, y = 0, v = 0;

//O(1)
int main () {
	for (int i = 0; i < 5; i++){
    	for (int j = 0; j < 5; j++){
		    scanf("%d ", &v);
		    if (v) {
		        x = i;
		        y = j;
		        break;
            }
    	}
    }

    // calculate the distance from 2,2
    printf("%d\n", abs(2-x)+abs(2-y));
	return 0;
}
/*
input:-
-----------
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

output:-
-----------
1
*/
