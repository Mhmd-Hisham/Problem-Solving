#include <bits/stdc++.h>
/*
Problem: 10038 - Jolly Jumpers
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=979

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N;
int freq[3001], a, b;

int main () {
    fastio;
    
    while ( cin >> N && !cin.eof() ){
        memset(freq, 0, sizeof(freq));
        
        bool isJolly = true;

        cin >> a;
        for (int i = 1; i < N; ++i){
            cin >> b;
            
            if (abs(a-b) >= N) isJolly = false;
            else freq[abs(a-b)]++;
            
            a = b;
        }
        
        for (int i = 1; i < N; ++i)
            isJolly &= freq[i];
              
        cout << (isJolly? "Jolly" : "Not jolly") << '\n';
        
    }

    return 0;
}
/*
Sample input:-
-----------------
4 1 4 2 3
5 1 4 2 -1 6

Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
