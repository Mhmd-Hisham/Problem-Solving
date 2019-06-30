#include <bits/stdc++.h>
/*
Problem: D. Polycarp's phone book
Link   : https://codeforces.com/problemset/problem/858/D

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define PI acos(-1)
#define EPS 1e-10

#define FOR(i,to) for(i=0;i<(to);++i)
#define FORR(i,arr) for(auto& i:arr)
#define ITER(it,cont) for(__typeof(cont.begin()) it=cont.begin();it!=cont.end();it++)
#define ALL(v) (v.begin()),(v.end())
#define ZERO(arr) memset(arr,0,sizeof(arr))
#define MINUS(arr) memset(arr,0xff,sizeof(arr))
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N;

string numbers[70001], ans, sub;
unordered_map<string, int> freq, tmp;

int main () {
    fastio;
    
    cin >> N;
    
    for (int i = 0; i < N; ++i){
        cin >> numbers[i];

        for (int j = 0; j < 9; ++j){
            // j -> start point
            for (int k = 1; k <= 9-j; ++k){
                // k -> substring size
                sub = numbers[i].substr(j, k);
                tmp[sub] = 1;
            }
        }
        
        // Just to avoid duplicate substrings from one number
        for (auto key : tmp)
            freq[key.first]++;

        tmp.clear();
    }
    
    for (int i = 0; i < N; ++i){

        int min_size = INT_MAX;
        for (int j = 0; j < 9; ++j){
            for (int k = 1; k <= 9-j; ++k){
                sub = numbers[i].substr(j, k);
                
                if ((freq[sub] == 1) && (k < min_size)){
                    ans = sub;
                    min_size = k;
                }
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}
/*
Sample input:-
-----------------
3
123456789
100000000
100123456

Sample output:-
-----------------
7
000
01


Resources:-
-------------

Explanation:
---------------

*/
