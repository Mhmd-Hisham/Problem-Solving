#include <bits/stdc++.h>
/*
Problem: K. Is It 001
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, M;
char S;

bool isRight = false;

int main () {
    fastio;
    
    cin >> N >> S >> M;
    
    
    switch (S){
        case '>': {isRight = (N > M); break;}
        case '<': {isRight = (N < M); break;}
        case '=': {isRight = (N == M); break;}
    }

    cout << (isRight? "Right" : "Wrong") << endl;
    return 0;
}
/*
Sample input:-
-----------------
5 > 4

Sample output:-
-----------------
Right


Resources:-
-------------
https://stackoverflow.com/questions/795286/what-does-do-in-c

Explanation:
---------------

*/
