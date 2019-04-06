#include <bits/stdc++.h>
/*
Problem: 10469 - To Carry or not to Carry
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1410

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

unsigned int A, B;

int main () {

    while ( scanf("%u%u", &A, &B) != EOF ){
        
        printf("%u\n", A^B);    

    }

    return 0;
}
/*
Sample input:-
-----------------
4 6
6 9

Sample output:-
-----------------
2
15

Resources:-
-------------

Explanation:
---------------

*/
