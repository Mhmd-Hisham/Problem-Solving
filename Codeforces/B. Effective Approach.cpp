#include <bits/stdc++.h>
/*
Problem: B. Effective Approach
Link   : https://codeforces.com/contest/227/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, M;
int freq[100003], tmp;

int main () {
    fastio;
    
    cin >> N;

    for (int i = 0; i < N; ++i){
        cin >> tmp;
        freq[tmp] = i+1;
    }


    ull vasya = 0, petya = 0;
    cin >> M;
    for (int i = 0; i < M; ++i){
        cin >> tmp;
        
        vasya += freq[tmp];
        petya += N-freq[tmp]+1;
    }

    cout << vasya << " " << petya << '\n';
    return 0;
}
/*
Sample input:-
-----------------
3
3 1 2
3
1 2 3

Sample output:-
-----------------
6 6

Resources:-
-------------

Explanation:
---------------

*/
