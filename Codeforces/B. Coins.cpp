#include <bits/stdc++.h>
/*
Problem: B. Coins
Link   : https://codeforces.com/contest/47/problem/B

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

bool AB = 0, AC = 0, BC = 0;
char l1, l2, sign;

int main () {
    

    for (int i = 0; i < 3; ++i){
        scanf("%c%c%c\n", &l1, &sign, &l2);

        if ((l1 == 'A') && (l2 == 'B')) AB = (sign=='>')? 1:0;
        else if ((l1 == 'B') && (l2 == 'A')) AB = (sign=='<')? 1:0;
        
        else if ((l1 == 'A') && (l2 == 'C')) AC = (sign=='>')? 1:0;
        else if ((l1 == 'C') && (l2 == 'A')) AC = (sign=='<')? 1:0;
        
        else if ((l1 == 'B') && (l2 == 'C')) BC = (sign=='>')? 1:0;
        else if ((l1 == 'C') && (l2 == 'B')) BC = (sign=='<')? 1:0;
    }
    
    string ans;
    
    // 2 * 2 * 2 = 8 possibilities
    
    if ((AB) && (AC) && (BC)) ans = "CBA";         // A>B, A>C, B>C
    
    if ((!AB) && (AC) && (BC)) ans = "CAB";        // A<B, A>C, B>C 
    if ((AB) && (!AC) && (BC)) ans = "Impossible"; // A>B, A<C, B>C
    if ((AB) && (AC) && (!BC)) ans = "BCA";        // A>B, A>C, B<C

    if ((!AB) && (!AC) && (BC)) ans = "ACB";       // A<B, A<C, B>C
    if ((AB) && (!AC) && (!BC)) ans = "BAC";       // A>B, A<C, B<C
    if ((!AB) && (AC) && (!BC)) ans = "Impossible";// A<B, A>C, B<C

    if ((!AB) && (!AC) && (!BC)) ans = "ABC";      // A<B, A<C, B<C

    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------
A>B
C<B
A>C

Sample output:-
-----------------
CBA

Resources:-
-------------

Explanation:
---------------

*/
