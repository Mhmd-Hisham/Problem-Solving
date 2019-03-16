#include <bits/stdc++.h>
/*
Problem: 12032 - The Monkey and the Oiled Bamboo
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3183

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

const int MAX_HEIGHT = 10000000;

bool valid(int k);
int T, N, K, heights[100002], testcase = 0;

int main () {

    heights[0] = 0;
    scanf("%d\n", &T);
    while ( T-- ){
        scanf("%d\n", &N);

        for (int i = 0; i < N; i++)
            scanf("%d", &heights[i+1]);

        K = 0;
        for (int b = MAX_HEIGHT; b >= 1; b /= 2){
            while (!valid(K+b)) K +=b;
        }

        printf("Case %d: %d\n", ++testcase, K+1);
    }
    
    return 0;
}

bool valid(int k){

    for (int i = 0; i < N; ++i){
        if (heights[i]+k < heights[i+1]){
            return false;
        }

        if (heights[i+1]-heights[i] == k) k--;
    }

    return true;
}

/*
Sample input:-
-----------------
2
5
1 6 7 11 13
4
3 9 10 14

Sample output:-
-----------------
Case 1: 5
Case 2: 6

Resources:-
-------------

Explanation:
---------------

*/
