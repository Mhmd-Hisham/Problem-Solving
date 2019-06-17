#include <bits/stdc++.h>
/*
Problem: B. Sort the Array
Link   : https://codeforces.com/contest/451/problem/B

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
int arr[100001], sorted_arr[100001];

int segments = 0;
int start_idx = -1, end_idx;

bool possible = true;

int main () {
    fastio;
    
    cin >> N;
    
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }

    sort(sorted_arr, sorted_arr+N);
    
    for (int i = 0; i < N; ++i){
        if (sorted_arr[i] != arr[i]){
            start_idx = start_idx == -1? i : start_idx;
            end_idx = i;
        }
    }
    
    // check if arr is already sorted
    if (start_idx == -1)
        start_idx = end_idx = 0;
    
    reverse(arr+start_idx, arr+end_idx+1);
    
    for (int i = start_idx; i <= end_idx; ++i){
        if (sorted_arr[i] != arr[i]) {
            possible = false;
            break;
        }
    }
    
    if (possible){
        cout << "yes\n";
        cout << start_idx+1 << " " << end_idx+1 << '\n';
    } else cout << "no\n";
    

    return 0;
}
/*
Sample input:-
-----------------
2
1 2

Sample output:-
-----------------
yes
1 1

Resources:-
-------------

Explanation:
---------------

*/
