#include <bits/stdc++.h>
/*
Problem: 10751 - Chessboard
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1692

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define PI acos(-1)
#define EPS 1e-10

int T, N;

int main () {
    scanf("%d", &T);
    
    double sqrt2 = sqrt(2.0);
    
    while ( T-- ){
        scanf("%d", &N);

        int x1 = (N-1)*4;
        int x2 = N*N - x1;

        double ans = x1 + x2*sqrt2; 
        
        printf("%.3f\n\n", (N==1)? 0 : ans);
    }
    

    return 0;
}
/*
Sample input:-
-----------------
3
1
2
3

Sample output:-
-----------------
0.000
4.000
9.414

Resources:-
-------------

Explanation:
---------------

length = x1*(1) + x2*(sqrt(2))
length = x1 + x2*sqrt(2) --->> Obj. func.
Max(Z) = x1 + x2*sqrt(2)

x1 --> no. moves to an edge adjacent cell
x2 --> no. moves to a corner adjacent cell

distance to an edge adjacent cell equals 1, [try dist( (1,1), (1,0) )]
distance to a corner adjacent cell equals sqrt(2), [try dist( (1,1), (0,0) )]

so, the total length is:
    len = x1*1 + x2 * sqrt(2)
        = x1   + x2 * sqrt(2)           ==============>>> [1]

knowing that the maximum number of moves is N*N
(as it's a squared board and we have to visit each cell only once)
So, 
    x1 + x2 = N*N                       ==============>>> [2]

By analyzing the problem..
 ______________________________________
|N  :| 1 | 2 |   3   |    4   |    5   |
|X1 :| 0 | 4 |   8   |    12  |   16   |
|X2 :| 0 | 0 |   1   |     4  |    9   |
|ans:| 0 | 4 | 9.414 | 17.657 | 28.729 |
 --------------------------------------

So,
    X1 = N-1 * 4                       ==============>>> [3]

And from there we can easily calculate the length from [1], [2] and [3].
*/
