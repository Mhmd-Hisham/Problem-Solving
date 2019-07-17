#include <bits/stdc++.h>
/*
Problem: 11340 - Newspaper
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2315

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int T, M, K;

char ch;
double freq[257], value;

int main () {
    fastio;
    
    cin >> T;
    
    while ( T-- ){
        cin >> K;
        memset(freq, 0, sizeof(freq));
        
        while ( K-- ){
            cin >> ch >> value;
            freq[(int)ch] = value;
        }
        
        int total_paid = 0;

        cin >> M;
        for (int i = 0; i <= M; ++i){
            string line;
            getline(cin, line);
            
            for (auto ch : line)
                total_paid += freq[(int)ch];
        }

        cout << fixed << setprecision(2) << total_paid/100.0 << "$\n";
    }

    return 0;
}
/*
Sample input:-
-----------------
1
7
a 3
W 10
A 100
, 10
k 7
. 3
I 13
7
ACM International Collegiate Programming Contest (abbreviated
as ACM-ICPC or just ICPC) is an annual multi-tiered competition
among the universities of the world. The ICPC challenges students
to set ever higher standards of excellence for themselves
through competition that rewards team work, problem analysis,
and rapid software development.
From Wikipedia.

Sample output:-
-----------------
3.74$

Resources:-
-------------

Explanation:
---------------

*/
