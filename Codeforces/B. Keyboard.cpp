#include <bits/stdc++.h>
/*
Problem: B. Keyboard
Link   : https://codeforces.com/contest/88/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, M, X;

int q, ans = 0;
int distances[123];

char keyboard[30][30];
char query[500001], devnull, tmp;

int idx;
char shifts_i[901], shifts_j[901];

int main (){
    
    scanf("%d %d %d\n", &N, &M, &X);
    
    fill(distances, distances+123, INT_MAX);    
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < M; ++j){
            scanf("%c", &keyboard[i][j]);
            
            if (keyboard[i][j] == 'S'){
                shifts_i[idx] = i;
                shifts_j[idx++] = j;
            }
        }
        scanf("%c", &devnull);
    }
            
    scanf("%d\n", &q);
    for (int i = 0; i < q; ++i)
        scanf("%c", &query[i]);


    for (int i = 0; i < N; ++i){
        for (int j = 0; j < M; ++j){
            if (keyboard[i][j] == 'S') 
                continue;

            if (idx == 0) {
                distances[(int)keyboard[i][j]] = 0;
                continue;
            }
            
            int min_dist = INT_MAX;
            for (int k = 0; k < idx; k++){
                int x = shifts_i[k], y = shifts_j[k];
                int dist = ((i-x)*(i-x))+((j-y)*(j-y));

                min_dist = min(min_dist, dist);
            }
            
            distances[(int)keyboard[i][j]] = min(min_dist, distances[(int)keyboard[i][j]]);

        }
    }

    bool shift_exists = (idx != 0);
    for (int i = 0; i < q; ++i){
        char lowercase = tolower(query[i]);

        bool is_uppercase = isupper(query[i]);
        bool exists = (distances[(int)lowercase] != INT_MAX);

        if ((is_uppercase && !shift_exists) || (!exists)) {
            ans = -1;
            break;
        }

        else if (is_uppercase)
            ans += (distances[(int)lowercase] > X*X);
    }
    
    printf("%d\n", ans);
    
    return 0;
}

/*
Sample input:-
-----------------
3 9 4
qwertyuio
asdfghjkl
SzxcvbnmS
35
TheQuIcKbRoWnFOXjummsovertHeLazYDOG

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
