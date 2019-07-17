#include <bits/stdc++.h>
/*
Problem: 12356 - Army Buddies
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3778

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int S, B;

int main () {
    fastio;
    
    while ( cin >> S >> B && (B|S)){
        int left[100002], right[100002];
        int L, R, lBuddy, rBuddy;
        

        for (int i = 1 ;i <= S; ++i)
            left[i] = i-1, right[i] = i+1;

        left[1] = -1, right[S] = -1;

        while (B--){
            cin >> L >> R;
            
            left[right[R]] = left[L];
            right[left[L]] = right[R];
            
            lBuddy = left[L];
            rBuddy = right[R];

            if (lBuddy != -1) cout << lBuddy;
            else cout << "*";
            
            cout << " ";
            
            if (rBuddy != -1) cout << rBuddy;
            else cout << "*";
            
            cout << '\n';
        }
        
        cout << "-\n";
    }
    
    return 0;
}
/*
Sample input:-
-----------------
1 1
1 1
10 4
2 5
6 9
1 1
10 10
5 1
1 1
0 0

Sample output:-
-----------------
* *
-
1 6
1 10
* 10
* *
-
* 2
-

Resources:-
-------------

Explanation:
---------------

*/
