#include <bits/stdc++.h>
/*
Problem: A. Vasya and Socks
Link   : https://codeforces.com/problemset/problem/460/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, M, days = 0;

int main () {
    scanf("%d%d", &N, &M);
    
    // Just simulate the process
    while ( N-- ){
        days++;
        if (days % M == 0) N++;
    }
    
    printf("%d\n", days);    
    return 0;
}
/*
Sample input:-
-----------------
2 2

Sample output:-
-----------------
3

Resources:-
-------------

Explanation:
---------------

*/
