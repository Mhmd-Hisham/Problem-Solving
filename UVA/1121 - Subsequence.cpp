#include <bits/stdc++.h>
/*
Problem: 1121 - Subsequence
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3562

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

long long N, S;
long long seq[100001];

int main () {

    while ( scanf("%lld %lld\n", &N, &S) != EOF ){
        int optimal_len = INT_MAX;

        for (int i = 0; i < N; i++)
            scanf("%lld", &seq[i]);
        
        int p1 = 0, p2 = 0, seq_sum = 0;
        while ( p1 <= p2 && p2 < N ){
            if (seq_sum < S){
                seq_sum += seq[p2];
                p2++;
            }

            while ( seq_sum >= S ){
                optimal_len = min(optimal_len, p2-p1);
                seq_sum -= seq[p1];
                p1++;
            }
        }
        
        // if the whole sequence sum is less than S
        optimal_len = (optimal_len == INT_MAX)? 0 : optimal_len;
        
        printf("%d\n", optimal_len);
    }

    return 0;
}
/*
Sample input:-
-----------------
10 15
5 1 3 5 10 7 4 9 2 8
5 11
1 2 3 4 5

Sample output:-
-----------------
2
3

Resources:-
-------------

Explanation:
---------------

*/
