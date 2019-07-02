#include <bits/stdc++.h>
/*
Problem: W. Table
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long X;

int main () {
    fastio;
    
    cin >> X;
    
    switch (X){
        case 61: {cout << "Art of computer programming\n"; break;}
        case 71: {cout << "Introduction to algorithm\n"; break;}
        case 11: {cout << "Competitive programming\n"; break;}
        case 29: {cout << "Programming challenges\n"; break;}
        
        default:
            cout << "Not found\n";
    }
    
    return 0;
}
/*
Sample input:-
-----------------
11

Sample output:-
-----------------
Competitive programming

Resources:-
-------------

Explanation:
---------------

*/
