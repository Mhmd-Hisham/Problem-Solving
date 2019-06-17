#include <bits/stdc++.h>
/*
Problem: B. Decoding
Link   : https://codeforces.com/contest/746/problem/B

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
string word;

int main () {
    fastio;
    
    cin >> N >> word;
    
    string decoded = word;
     
    int s = 0, e = N-1;

    for (int i = 0; i < N; ++i)
        decoded[i&1? s++ : e--] = word[N-i-1];
    
    cout << decoded << '\n';

    return 0;
}
/*
Sample input:-
-----------------
5
logva


Sample output:-
-----------------
volga


Resources:-
-------------

Explanation:
---------------

*/
