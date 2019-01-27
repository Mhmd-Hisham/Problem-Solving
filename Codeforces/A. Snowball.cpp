#include <bits/stdc++.h>
/*
Problem: A. Snowball
Link   : https://codeforces.com/contest/1099/problem/A

solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/


using namespace std;

int w, h;
int w1, w2, h1, h2;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> w >> h >> w1 >> h1 >> w2 >> h2;

    while (h){
        w += h;
        
        if (h == h1) { w -= w1; w = (w < 0)? 0 : w;}

        if (h == h2) { w -= w2; w = (w < 0)? 0 : w;}

        h--;
    }

    cout << w << '\n';
    return 0;
}
/*
Sample input:-
-----------------
4 3
1 1
1 2


Sample output:-
-----------------
8

Resources:-
-------------

Explanation:
---------------

*/
