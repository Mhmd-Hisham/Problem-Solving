#include <bits/stdc++.h>
/*
Problem: A. Olesya and Rodion
Link   : https://codeforces.com/contest/584/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int n = 0, t = 0;

int main () {
	scanf("%d %d\n", &n, &t);

    if (t == 10){
        if (n == 1) printf("-1");        // (1 digit number < 2 digits number)
        else {
            printf("1");
            n--;
            while (n--) printf("0");    //'10^n' is divisible by 10 for sure
        }
    }
    else{
        while (n--) printf("%d", t);    // 'tttt' sure is divisible by t
    }

	return 0;
}
/*
input:-
-----------
3 2

output:-
-----------
712 

Resources:-
-------------

*/
