#include <bits/stdc++.h>
/*
Problem: A. Launch of Collider
Link   : https://codeforces.com/contest/699/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, particles[200001], moment = INT_MAX;
string directions;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> directions;

    size_t pos = directions.find("RL");
    if ( pos == string::npos ) {cout << "-1\n"; return 0;}

    for (int i = 0; i < N; i++){
        cin >> particles[i];
    }
    
    while ( pos != string::npos ){
        moment = min(moment, (particles[pos+1]-particles[pos])/2);
        pos = directions.find("RL", pos+2);
    }
    
    cout << moment << '\n';    
    
    return 0;
}
/*
Sample input:-
-----------------
4
RLRL
2 4 6 10

Sample output:-
-----------------
1

Resources:-
-------------
Video Solution (Arabic) [Eng Samed Hajajla]: https://www.youtube.com/watch?v=2xSkHmA5z8s

Explanation:
---------------

*/
