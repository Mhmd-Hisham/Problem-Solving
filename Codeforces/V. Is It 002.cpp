#include <bits/stdc++.h>
/*
Problem: V. Is It 002
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long A, B, R, ans;
char S, trash;

bool isRight;

int main () {
    fastio;

    cin >> A >> S >> B >> trash >> R;
    
    switch (S){
        case '+': {isRight = ((A+B) == R); ans = A+B; break;}
        case '-': {isRight = ((A-B) == R); ans = A-B; break;}
        case '*': {isRight = ((A*B) == R); ans = A*B; break;}
    }

    if (isRight)
        cout << "Yes" << endl;
    else
        cout << ans << endl;
    
    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
