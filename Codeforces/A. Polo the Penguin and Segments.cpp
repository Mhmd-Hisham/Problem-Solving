#include <bits/stdc++.h>
/*
Problem: A. Polo the Penguin and Segments
Link   : https://codeforces.com/contest/289/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/


using namespace std;

int N, K, l, r, value = 0;

int main () {
    scanf("%d%d", &N, &K);

    for (int i = 0; i < N; i++){
        scanf("%d %d\n", &l, &r);
        value += r-l+1;
    }

    printf("%d\n", (K-(value%K))%K );

    return 0;
}
/*
Sample input:-
-----------------
2 3
1 2
3 4

Sample output:-
-----------------
2

Resources:-
-------------
Video Solution - (Arabic) [Eng Mostafa Saad]: https://www.youtube.com/watch?v=EjH3kDiEpS0

Explanation:
---------------

*/
