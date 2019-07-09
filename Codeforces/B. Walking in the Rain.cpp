#include <bits/stdc++.h>
/*
Problem: B. Walking in the Rain
Link   : https://codeforces.com/problemset/problem/192/B

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
int days[1001], max_days = INT_MIN, ans = INT_MIN;
bool valid(int no_days);

int main () {
    fastio;
    
    cin >> N;

    for (int i = 0; i < N; ++i){
        cin >> days[i];
        max_days = max(max_days, days[i]);
    }
    
    int start = 0, end = max_days;
    
    while (start < end){
        int mid = (start+end+1)>>1;
        
        if (valid(mid)) start = mid;
        else end = mid-1;
    
    }
    
    cout << start << '\n';

    return 0;
}

bool valid(int no_days){

    if (days[0]<no_days || days[N-1]<no_days)
        return false;
    
    for (int i = 0; i < N-1; ++i){
        if ((days[i]<no_days) && (days[i+1]<no_days))
             return false; // two consecutive broken tiles
    }
    
    
    return true;
}


/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
