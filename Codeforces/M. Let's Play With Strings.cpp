#include <bits/stdc++.h>
/*
Problem: M. Let's Play With Strings
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M

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
int frequency[150] = {0};

int main () {
    fastio;
    
    
    cin >> S;
    
    for (auto ch : S)
        frequency[(int)ch]++;

    for (char ch = 'a'; ch <= 'z'; ++ch)
        if (frequency[(int)ch])
            cout << ch << " : " << frequency[(int)ch] << endl;
    
    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------
https://www.geeksforgeeks.org/find-frequency-number-array/
https://www.geeksforgeeks.org/counting-frequencies-of-array-elements/

Explanation:
---------------

*/
