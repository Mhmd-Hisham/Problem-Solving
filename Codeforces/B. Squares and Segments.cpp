#include <bits/stdc++.h>
/*
Problem: B. Squares and Segments
Link   : https://codeforces.com/contest/1099/problem/B

solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

long long int N = 0, segments = 0;
double sq = 0;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    sq = sqrt((double)N);
    segments = sqrt((double)N);
    
    if (sq == segments) segments*=2;
    else {
        segments = ceil(sq);
        segments = (segments*(segments-1) >= N)? segments*2-1 : segments*2;
    }
    
    cout << segments << '\n';
    return 0;
}
/*
Sample input:-
-----------------
4

Sample output:-
-----------------
4

Resources:-
-------------

Explanation:
---------------

*/
