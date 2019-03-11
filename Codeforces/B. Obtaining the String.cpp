#include <bits/stdc++.h>
/*
Problem: B. Obtaining the String
Link   : https://codeforces.com/contest/1015/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;
string s, t;
vector<int> swaps;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> s >> t;
    
    for (int i = 0; i < N; i++){
        if (s[i] != t[i]){
            int q = -1;
            
            for (int j = i+1; j < N; j++){
                if (s[j] == t[i]){
                    q = j;
                    break;
                }
            }
            
            if (q == -1) {cout << -1 << '\n'; return 0;}
            
            for (int j = q-1; j >= i; j--){
                swaps.push_back(j+1);
                swap(s[j], s[j+1]);
            }
        }
    }
    
    cout << swaps.size() << '\n';
    for (int i = 0; i < swaps.size(); i++){
        cout << swaps[i] << ' ';
    }
    
    return 0;
}
/*
Sample input:-
-----------------
6
abcdef
abdfec

Sample output:-
-----------------
4
2 4 3 4 

Resources:-
-------------

Explanation:
---------------

*/
