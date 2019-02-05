#include <bits/stdc++.h>
/*
Problem: A. Yaroslav and Permutations
Link   : https://codeforces.com/contest/296/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, max_freq = 0;
int arr[101], freq[1001];

int main () {

    scanf("%d\n", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d\n", &arr[i]);
        freq[arr[i]]++;
        max_freq = max(freq[arr[i]], max_freq);
    }
    
    printf( (ceil(N/2.0) >= max_freq)? "YES\n" : "NO\n");

    return 0;
}
/*
Sample input:-
-----------------
3
1 1 2

Sample output:-
-----------------
YES

Resources:-
-------------
Video Solution (Arabic) [Eng Mostafa Saad]: https://www.youtube.com/watch?v=kdgWBRPqMfo

Explanation:
---------------

*/
