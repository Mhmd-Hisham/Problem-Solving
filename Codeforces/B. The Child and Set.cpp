#include <bits/stdc++.h>
/*
Problem: B. The Child and Set
Link   : https://codeforces.com/problemset/problem/437/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int main () {
    int sum, limit;
    int lowbit = 0, set[100001] = {0}, idx = 0, n = 0;

    scanf("%d %d\n", &sum, &limit);
    
    while (limit){
        lowbit = (limit & (-limit));

        if (lowbit <= sum){
            sum -= lowbit;
            set[idx] = limit; idx++;
            n++;
        }
        
        limit--;
    }
    
    if (sum == 0){
        printf("%d\n", n);

        while (idx){
            idx--;
            printf("%d ", set[idx]);
        }
    }
    else printf("-1");

    
    printf("\n");
    return 0;
}
/*
Sample input:-
-----------------
5 1

Sample output:-
-----------------
-1

Resources:-
-------------
http://www.goldsborough.me/bits/c++/low-level/problems/2015/10/11/23-52-02-bit_manipulation/

Explanation:
---------------

*/
