#include <bits/stdc++.h>
/*
Problem: H. Way Too Long Words
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n;
string word;

int main () {
    fastio;
    
    cin >> n;
    
    while ( n-- ){
        cin >> word;
        
        int len = word.size();
        if (len > 10)
            cout << word[0] << len-2 << word[len-1] << endl;
        
        else cout << word << endl;
    }

    return 0;
}
/*
Sample input:-
-----------------
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Sample output:-
-----------------
word
l10n
i18n
p43s

Resources:-
-------------

Explanation:
---------------

*/
