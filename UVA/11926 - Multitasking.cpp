#include <bits/stdc++.h>
/*
Problem: 11926 - Multitasking
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3077

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
bitset<1000002> calendar;

bool testRange(int start, int end){
    for (int i = start+1; i <= end; ++i){
        if (calendar.test(i)) return true;
        else calendar.set(i);
    }

    return false;
}

int main () {
    fastio;
        
    while ( cin >> N >> M && (N || M)){        
        bool conflict = false;
        int start, end, interval;
        calendar.reset();
        
        while ((N--)){
            cin >> start >> end;
            conflict |= testRange(start, end);
        }

        while ((M--)){
            cin >> start >> end >> interval;

            while ((start < 1000000)){
                conflict |= testRange(start, end);

                start += interval;
                end = min(end+interval, 1000000);
            }
        }
        
        cout << (conflict? "CONFLICT" : "NO CONFLICT" ) << '\n';
    }
    
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
