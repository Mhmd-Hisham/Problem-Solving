#include <bits/stdc++.h>
/*
Problem: O. Capital and Small
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string S;

int main () {
    fastio;
    
    
    cin >> S;
    
    for (int i = 0; i < S.size(); ++i){
        if (isupper(S[i])) S[i] = tolower(S[i]);
        else S[i] = toupper(S[i]);
    }
    
    cout << S << endl;

    return 0;
}
/*
Sample input:-
-----------------
AcpcClubAssiut

Sample output:-
-----------------
aCPCcLUBaSSIUT


Resources:-
-------------

Explanation:
---------------

*/
