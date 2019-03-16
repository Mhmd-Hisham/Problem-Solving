#include <bits/stdc++.h>
/*
Problem: 11413 - Fill the Containers
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2408

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, M, vessels[1001];
bool valid(int capacity);

int main () {

    while ( scanf("%d %d\n", &N, &M) != EOF ){
        
        int max_capacity = 0, sum = 0;
        for (int i = 0; i < N; ++i){
            scanf("%d", &vessels[i]);
            max_capacity = max(max_capacity, vessels[i]);
            sum += vessels[i];
        }

        int capacity = max_capacity;
        for (int b = sum; b >= 1; b /= 2)
            while (!valid(capacity + b)) capacity += b;
        
        if (!valid(capacity)) capacity++;

        printf("%d\n", capacity);
    }
    
    return 0;
}

bool valid(int capacity){
    
    int containers = 0, seg_sum = 0;
    for (int i = 0; i < N; ++i){

        if (seg_sum+vessels[i] > capacity) seg_sum = 0;
        if (seg_sum == 0) containers++;

        seg_sum += vessels[i];
    }

    return containers <= M;
}
/*
Sample input:-
-----------------
5 3
1 2 3 4 5
3 2
4 78 9

Sample output:-
-----------------
6
82

Resources:-
-------------

Explanation:
---------------

*/
