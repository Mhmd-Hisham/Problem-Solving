#include <bits/stdc++.h>
/*
Problem: 10107 - What is the Median?
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1048

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

unsigned int arr[10001];

int main () {
    fastio;
    
    int idx = 0;
    while ( cin >> arr[idx++] && !cin.eof() ) {
        int mid = (idx/2);
        
        int ans = 0;
        
        nth_element(arr, arr+mid, arr+idx);
        
        if (idx&1)
            ans = arr[mid];
        
        else {
            nth_element(arr, arr+mid-1, arr+idx);    
            ans = (arr[mid]+arr[mid-1])/2;
        }
        
        
        cout << ans << '\n';
    }
    
    
    return 0;
}
/*
Sample input:-
-----------------
1
3
4
60
70
50
2

Sample output:-
-----------------
1
2
3
3
4
27
4


Resources:-
-------------

Explanation:
---------------

*/
