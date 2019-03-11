#include <bits/stdc++.h>
/*
Problem: A. Points in Segments
Link   : https://codeforces.com/contest/1015/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, M;
int l, r, cnt = 0;
bool axis[101] = {};

int main () {

    scanf("%d %d\n", &N, &M);
    
    while ( N-- ){
        scanf("%d %d\n", &l, &r);
        for (int i = l; i <= r; i++)
            if (!axis[i]) {axis[i] = true; cnt++;}
    }
    
    printf("%d\n", M-cnt);    
    
    for (int i = 1; i <= M; i++){
        if (!axis[i]) printf("%d ", i);
    }

    printf("\n");
    return 0;
}
/*
Sample input:-
-----------------
3 5
2 2
1 2
5 5

Sample output:-
-----------------
2
3 4 

Resources:-
-------------

Explanation:
---------------

*/
