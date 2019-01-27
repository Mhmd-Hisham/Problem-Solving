#include <bits/stdc++.h>
/*
Problem: B. Teams Forming
Link   : https://codeforces.com/contest/1092/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, skills[101], to_solve = 0;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> skills[i];
    }
    
    sort(skills, skills+N);
    
    for (int i = 0; i < N-1; i+=2){
        to_solve += skills[i+1]-skills[i];
    }


    cout << to_solve << '\n';
    return 0;
}
/*
Sample input:-
-----------------
2
1 100

Sample output:-
-----------------
99

Resources:-
-------------

Explanation:
---------------

*/
