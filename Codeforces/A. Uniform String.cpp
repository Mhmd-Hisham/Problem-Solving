#include <bits/stdc++.h>
/*
problem: A. Uniform String
Link   : https://codeforces.com/contest/1092/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int n = 0, k = 0, pass_idx = 0, t = 0;
char password[101];
char lowercase[27] = "abcdefghijklmnopqrstuvwxyz";

int main () {
    
	scanf("%d\n", &t);

    while ( t-- ){
    	scanf("%d %d\n", &n, &k);
        int i = 0, pass_idx = 0;
        char password[101];

	    while ( pass_idx < n ){
	        password[pass_idx] = lowercase[i];
	        
	        i = (i < k-1)? i+1: 0;
	        pass_idx++;

	    }
        for (int i = 0; i < pass_idx; i++){
            printf("%c", password[i]);
        }

        printf("\n");
    }

	return 0;
}
/*
Sample input:-
-----------------
3
7 3
4 4
6 2

Sample output:-
-----------------
cbcacab
abcd
baabab

Resources:-
-------------


Explanation:
---------------

*/
