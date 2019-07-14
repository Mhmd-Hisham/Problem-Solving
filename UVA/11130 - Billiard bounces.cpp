#include <bits/stdc++.h>
/*
Problem: 11130 - Billiard bounces
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2071

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define PI acos(-1)

int a, b, v, A, s;

int main () {
    
    while ( scanf("%d%d%d%d%d", &a, &b, &v, &A, &s) && s ){
        
        double xi = a/2, yi = b/2; // initial position
        
        double dist = v*s/2.0;     // distance in total
        double xd = dist*cos(A*PI/180.0), yd = dist*sin(A*PI/180.0); // distance in the x, y components
        
        printf("%d %d\n", (int)((xd+xi)/a), (int)((yd+yi)/b));
    }
    
    return 0;
}
/*
Sample input:-
-----------------
100 50 10 90 10
100 50 10 0 40
100 100 10 45 15
100 50 10 1 200
100 50 10 89 200
100 50 10 45 1000
100 100 10 30 200
0 0 0 0 0

Sample output:-
-----------------
0 1
2 0
1 1
10 0
0 20
35 71
9 5

Resources:-
-------------

Explanation:
---------------

*/

