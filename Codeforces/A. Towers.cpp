#include <bits/stdc++.h>
/*
Problem: A. Towers
Link   : https://codeforces.com/problemset/problem/37/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, frequency[1002], tower;
int most_freq = 0, towers = 0;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    while ( N-- ){
        cin >> tower;

        towers += !frequency[tower];
        frequency[tower]++;

        most_freq = max(most_freq, frequency[tower]);
    }
 
    cout << most_freq << " " << towers << '\n';
    return 0;
}
/*
Sample input:-
-----------------
4
6 5 6 7

Sample output:-
-----------------
2 3

Resources:-
-------------
https://www.geeksforgeeks.org/find-frequency-number-array/

Explanation:
---------------

*/
