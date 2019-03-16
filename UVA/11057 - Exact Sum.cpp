#include <bits/stdc++.h>
/*
Problem: 11057 - Exact Sum
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1998

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, M, prices[10001];
int I, J;

int lower_bound_search(int v){

    int idx = 0;
    for (int b = N-1; b >= 1; b /= 2){
        while (idx+b < N && prices[idx+b] <= v) idx += b;
    }
    
    return idx;
}

int main () {
    
    while ( scanf("%d\n", &N) != EOF ){
        int I = 0, J = 0;
    
        for (int i = 0; i < N; i++)
            scanf("%d", &prices[i]);
        
        scanf("%d\n", &M);
        sort(prices, prices+N);
        
        // search for the lower bound index to M/2
        int start_idx = lower_bound_search(M/2);
        
        for (int i = start_idx+1; i >= 0; i--){
            
            int A = lower_bound_search(M-prices[i]);
            
            if (prices[A] == M-prices[i] && A != i){
                I = min(prices[A], M-prices[A]);
                J = M-I;
                break;
            }
        }
        
        printf("Peter should buy books whose prices are %d and %d.\n\n", I, J);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
40 40
80

5
10 2 6 8 4
10

Sample output:-
-----------------
Peter should buy books whose prices are 40 and 40.

Peter should buy books whose prices are 4 and 6.

Resources:-
-------------

Explanation:
---------------

*/
