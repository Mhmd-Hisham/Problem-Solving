#include <bits/stdc++.h>
/*
Problem: A. Repeating Cipher
Link   : https://codeforces.com/contest/1095/problem/0

solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/


using namespace std;

int N = 0;
string t;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> N >> t;
    
    int i = 0;
    while (i < t.length()){
        t.erase(i, i);
        i++;
    }

    cout << t << '\n';
    return 0;
}
/*
Sample input:-
-----------------
6
baabbb

Sample output:-
-----------------
bab

Resources:-
-------------

Explanation:
---------------

*/
