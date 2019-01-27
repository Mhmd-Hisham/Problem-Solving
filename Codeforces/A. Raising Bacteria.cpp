#include <bits/stdc++.h>
/*
Problem: A. Raising Bacteria
Link   : https://codeforces.com/problemset/problem/579/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;

int main () {
	scanf("%d\n", &N);

	int count = 0; //Just count the number of ones in the number! :P
    
    while(N){
        N &= (N-1);
        count++;
    }

	printf("%d\n", count);
	return 0;
}
/*
Sample input:-
-----------------
8

Sample output:-
-----------------
1

Resources:-
-------------


Explanation:
---------------

*/
