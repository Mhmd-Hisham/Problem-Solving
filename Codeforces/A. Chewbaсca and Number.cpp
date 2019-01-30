#include <bits/stdc++.h>
/*
Problem: A. Chewbaсca and Number
Link   : https://codeforces.com/contest/514/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int main () {
    string number;
    
    cin >> number;
    
    for (int i = 0; number[i]; i++){
        if (number[i] > '4') number[i] = '9'-number[i]+'0';
    }

    if (number[0] == '0') number[0] = '9';

    cout << number;

    return 0;
}

/*
Sample input:-
-----------------
909090

Sample output:-
-----------------
900000

Resources:-
-------------

Explanation:
---------------

*/
