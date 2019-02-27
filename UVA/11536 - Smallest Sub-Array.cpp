#include <bits/stdc++.h>
/*
Problem: 11536 - Smallest Sub-Array
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2531

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int T, M, N, K;
int sequence[1000001];
int p1, p2, testcase = 1, len, curr_size;

int main () {
    scanf("%d\n", &T);

    // init the sequence
    sequence[0] = 1; sequence[1] = 2; sequence[2] = 3;

    while ( T-- ){
        scanf("%d %d %d\n", &N, &M, &K);
        
        // create the sequence
        int last_three = 6;
        for (int i = 3; i < N; i++){
            sequence[i] = last_three%M + 1;
            last_three -= sequence[i-3];
            last_three += sequence[i];
        }
        
        // now search for the segment
        len = INT_MAX;
        p1 = p2 = curr_size = 0;
        int freq[1001] = {};
        
        while ( p1 <= p2 && p2 < N ){
            if (curr_size < K){
                if (sequence[p2] <= K && !freq[sequence[p2]])
                    curr_size++;

                freq[sequence[p2]]++;
                p2++;
            }
            
            if (curr_size == K){
                while (sequence[p1] > K || ((sequence[p1] <= K) && (freq[sequence[p1]] > 1))){
                    freq[sequence[p1]]--;
                    p1++;
                }
                
                len = min(len, p2-p1);
                freq[sequence[p2]]++; p2++;
            }
        }
        
        printf("Case %d: ", testcase++);
        
        if (len == INT_MAX) printf("sequence nai\n");
        else printf("%d\n", len);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
20 12 4
20 12 8

Sample output:-
-----------------
Case 1: 13
Case 2: sequence nai

Resources:-
-------------

Explanation:
---------------

*/
