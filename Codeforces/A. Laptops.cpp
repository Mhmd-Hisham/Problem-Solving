#include <bits/stdc++.h>
/*
Problem: A. Laptops
Link   : https://codeforces.com/contest/456/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, price, quality;

int main () {
    scanf("%d", &N);

    while ( N-- ){
        scanf("%d%d", &price, &quality);
        if (price != quality) { printf("Happy Alex"); return 0;}
    }
    
    printf("Poor Alex");

    return 0;
}
/*
Sample input:-
-----------------
2
1 2
2 1

Sample output:-
-----------------
Happy Alex

Resources:-
-------------
Video Solution (Arabic) [Solver to be (Java)]: https://www.youtube.com/watch?v=_Ab4PUC2vMk

Explanation:
---------------
This was a tricky question actually.
You can solve it by creating a 2d array, sort the array and then run a linear scan to check Alex's condition.
But since the problem statement clearly states "All ai are distinct. All bi are distinct.", we can work around it.
Since all the numbers are DISTINCT, we can safely assume that the domain of the values is [1, N]. 
And from that we can say that if (A != B) [it dosen't matter if A > B or A < B in this case] then there will exist
a value A such that (Ai < Ai+1) and (Bi > Bi+1), we missed with the balance of the array. 

Here's an Example that should help you understand the code:
    -----------------------------
    Input:-
        3
        1 2   <<----
        2 3
        3 1   <<----
    Output:-
        Happy Alex
    -----------------------------
    Input:-
        3
        1 1
        2 2
        3 3
    Output:-
        Poor Alex
    -----------------------------
    Input:-
        3
        1 1
        2 3     <<-----
        3 2     <<-----
    Output:-
        Happy Alex
-----------------------------------------    
*/











