#include <bits/stdc++.h>
/*
Problem: 10660 - Citizen attention offices
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1601

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int T, N;
int k = 25;

int main () {

    scanf("%d\n", &T);
    while ( T-- ){
        scanf("%d\n", &N);

        int I, J, P;
        int areas[25][25] = {};
        
        for (int i = 0; i < N; i++){
            scanf("%d %d %d\n", &I, &J, &P);
            areas[I][J] = P;
        }

        int total_sum = INT_MAX;
        int offices[5] = {};
                
        for (int a = 0; a < k - 4; a++)
         for (int b = a+1; b < k - 3; b++)
          for (int c = b+1; c < k - 2; c++)
           for (int d = c+1; d < k - 1; d++)
            for (int e = d+1; e < k - 0; e++){

                int d_sum = 0;
                int points[5] = {a, b, c, d, e};
                
                for (int i = 0; i < k; i++){
                    for (int j = 0; j < k; j++){
                        if (!areas[i][j]) continue;
                        int min_dist = INT_MAX;

                        for (int d = 0; d < 5; d++){
                            int distance = abs(i - (points[d]-(points[d]%5))/5) + abs(j - points[d]%5);

                            min_dist = (distance < min_dist)? distance : min_dist;
                        }
                        
                        d_sum += min_dist * areas[i][j];
                    }
                }
                
                if (d_sum < total_sum){
                    total_sum = d_sum;
                    offices[0] = points[0];
                    offices[1] = points[1];
                    offices[2] = points[2];
                    offices[3] = points[3];
                    offices[4] = points[4];
                }
        }
        
        printf("%d %d %d %d %d\n", offices[0], offices[1], offices[2], offices[3], offices[4]);
    }
    
    return 0;
}

/*
Sample input:-
-----------------
4
1
2 2 1
4
0 0 1
4 4 1
0 4 1
4 0 1
5
0 0 1
1 1 1
2 2 1
3 3 1
4 4 1
7
4 2 2
3 3 1
2 4 3
2 1 1
1 3 4
1 2 2
1 0 1

Sample output:-
-----------------
0 1 2 3 12
0 1 4 20 24
0 6 12 18 24
5 7 8 14 22


Resources:-
-------------

Explanation:
---------------

*/
