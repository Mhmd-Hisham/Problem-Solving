#include <bits/stdc++.h>
/*
Problem: B. Mahmoud and a Triangle
Link   : https://codeforces.com/contest/766/problem/B

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
int segments[100001];

int main () {
    fastio;
    
    cin >> N;
    
    for (int i = 0; i < N; ++i){
        cin >> segments[i];
    }
    
    sort(segments, segments+N);

    for (int i = 0; i < N-2; ++i){
        int a = segments[i];
        int b = segments[i+1];
        int c = segments[i+2];
        
        if ((a+b>c) && (a+c>b) && (b+c>a)){
            cout << "YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";
    

    return 0;
}
/*
Sample input:-
-----------------
5
1 5 3 2 4

Sample output:-
-----------------
YES

Resources:-
-------------

Explanation:
---------------

*/
