#include <bits/stdc++.h>
/*
Problem: A. Buy a Shovel
Link   : https://codeforces.com/contest/732/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int k, r;
int shovles = 1, spent;

int main () {
	scanf("%d %d\n", &k, &r);

    spent = k;
    while (spent%10 != 0 && spent%10 != r){
        shovles++;
        spent += k;
    }

	printf("%d\n", shovles);
	return 0;
}
/*
input:-
-----------
117 3

output:-
-----------
9

Resources:-
-------------

*/
