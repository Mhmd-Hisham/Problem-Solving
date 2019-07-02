#include <bits/stdc++.h>
/*
Problem: L. Feedback
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int T;
string S;

string sub1 = "010", sub2 = "101";

int main () {
    fastio;
    
    cin >> T;
    
    while ( T-- ){
        cin >> S;
        
        if ( (S.find(sub1) != string::npos) ||
             (S.find(sub2) != string::npos) )
            cout << "Good\n"; 
        
        else cout << "Bad\n";   
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
