#include <bits/stdc++.h>
/*
Problem: A. Die Roll
Link   : https://codeforces.com/contest/9/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int roll1, roll2, probability;

int main () {
	scanf("%d %d\n", &roll1, &roll2);

	probability = 6 - (max(roll1, roll2)-1);

    // you can use gcd but why on such small range?
    if (probability == 0) printf("0/1");
    else if (probability == 1) printf("1/6");
    else if (probability == 2) printf("1/3");
    else if (probability == 3) printf("1/2");
    else if (probability == 4) printf("2/3");
    else if (probability == 5) printf("5/6");
    else printf("1/1");

	return 0;
}
/*
input:-
-----------
4 2

output:-
-----------
1/2

Resources:-
-------------

*/
