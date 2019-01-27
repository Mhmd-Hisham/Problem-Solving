#include <bits/stdc++.h>
/*
Problem: A. New Password
Link   : https://codeforces.com/contest/770/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int n = 0, k = 0, pass_idx = 0;
char password[101];
char lowercase[27] = "abcdefghijklmnopqrstuvwxyz";

int main () {
	scanf("%d %d\n", &n, &k);

    int i = 0;
	while ( pass_idx < n ){
	    password[pass_idx] = lowercase[i];
	    
	    i = (i < k-1)? i+1: 0;
	    pass_idx++;

	}
    for (int i = 0; i < pass_idx; i++){
        printf("%c", password[i]);
    }

	return 0;
}
/*
input:-
-----------
6 6

output:-
-----------
abcdef

Resources:-
-------------

*/
