#include <bits/stdc++.h>
/*
Problem: 725 - Division
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=666

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N;

int main () {

    scanf("%d\n", &N);
    while ( N ){
        
        bool found = false;
        for (int b = 1234; b <= 98765/N; b++){
            int a = b*N; // since a/b = N;
            int tmp, used = (b < 10000);
            
            tmp = a; while(tmp) { used |= 1<<(tmp%10); tmp /= 10; }
            tmp = b; while(tmp) { used |= 1<<(tmp%10); tmp /= 10; }
            
            if (used == ((1<<10) - 1)) {
                printf("%0.5d / %0.5d = %d\n", a, b, N);
                found = true;
            }
        }
       
        if (!found)
            printf("There are no solutions for %d.\n", N);
        
        scanf("%d\n", &N);
        if (N) printf("\n");
    }

    return 0;
}
/*
Sample input:-
-----------------
61
62
0

Sample output:-
-----------------
There are no solutions for 61.

79546 / 01283 = 62
94736 / 01528 = 62

Resources:-
-------------
Video Solution (Arabic) []: 

Explanation:
---------------

*/
