#include <bits/stdc++.h>
/*
Problem: C. They Are Everywhere
Link   : https://codeforces.com/contest/701/problem/C

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, visits = INT_MAX;

char flats[100001];
int required = 0, freq[256], current[256];

int main () {
    scanf("%d\n%100000s\n", &N, flats);

    for (int i = 0; i < N; i++)
        freq[flats[i]]++;

    for (int i = 0; i < 150; i++)
        if (freq[i]) required++;

    int p1 = 0, p2 = 0, curr_size = 0;
    while (p2 <= N){
        if (curr_size < required){
            current[flats[p2]]++;
            if (current[flats[p2]] == 1) curr_size++;
            p2++;
            continue;
        }

        if (current[flats[p1]] > 1){
            current[flats[p1]]--;
            p1++;
            continue;
        }

        visits = min(p2-p1, visits);

        p1++;
        p2 = p1;
        curr_size = 0;
        memset(current, 0, sizeof(current));
    }

    printf("%d\n", visits);
    return 0;
}
/*
Sample input:-
-----------------
3
AaA

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
