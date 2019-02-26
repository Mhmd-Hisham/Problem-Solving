#include <bits/stdc++.h>
/*
Problem: 11242 - Tour de France
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2183

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int F, R, Fs[11], Rs[11];
double max_spread, ratios[121];

int main () {
    
    while ( scanf("%d", &F) && F ){
        scanf("%d", &R);
        max_spread = INT_MIN;
        
        for (int i = 0; i < F; i++)
            scanf("%d", &Fs[i]);

        for (int i = 0; i < R; i++)
            scanf("%d", &Rs[i]);
        
        int idx = 0;
        for (int n = 0; n < R; n++)
            for (int m = 0; m < F; m++)
                ratios[idx++] = (double)Rs[n]/Fs[m];
        
        sort(ratios, ratios+R*F);
        
        for (int i = 0; i < F*R-1; i++){
            double d1 = ratios[i+1]/ratios[i];
            max_spread = max(d1, max_spread);
        }

        printf("%.2lf\n", max_spread);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
2 4
40 50
12 14 16 19
0

Sample output:-
-----------------
1.19

Resources:-
-------------

Explanation:
---------------

*/
