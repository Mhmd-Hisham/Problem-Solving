#include <bits/stdc++.h>
/*
Problem: J. I Love strings
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

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
string s1, s2, ans;

int main () {
    fastio;
    
    cin >> N;
    
    while ( N-- ){
        cin >> s1 >> s2;
        
        int l1 = s1.size(), l2 = s2.size();
        int idx1 = 0, idx2 = 0;

        bool take_from_first = true;

        ans = "";
        for (int i = 0; i < l1+l2; ++i){
            
            if (take_from_first) {
                if (idx1 < l1) ans += s1[idx1++];
                else ans += s2[idx2++];
            }

            else {
                if (idx2<l2) ans += s2[idx2++];
                else ans += s1[idx1++];        
            }

            take_from_first = !take_from_first;
        }
        cout << ans << endl;
    }

    return 0;
}
/*
Sample input:-
-----------------
2
Lol O
AM CICPC

Sample output:-
-----------------
LOol
ACMICPC

happy newyear enjoy

Resources:-
-------------

Explanation:
---------------

*/
