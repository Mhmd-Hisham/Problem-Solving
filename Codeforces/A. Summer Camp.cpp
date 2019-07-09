#include <bits/stdc++.h>
/*
Problem: A. Summer Camp
Link   : https://codeforces.com/problemset/problem/672/A

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
string digits = "";

int main () {
    fastio;
    
    cin >> N;
    
    //1->9          (9)  (1*9*(10^0))
    //10 -> 99     (180) (2*9*(10^1)) --> (K*9*(10^(k-1)))
    //100 -> 999  (2700) (3*9*(10^2))
    //
    //
        
    for (int i = 1; i <= 370; ++i)
        digits += to_string(i);

    cout << digits[N-1] << endl;

    return 0;
}
/*
Sample input:-
-----------------
3

Sample output:-
-----------------
3

Resources:-
-------------

Explanation:
---------------

*/
