#include <bits/stdc++.h>
/*
Problem: B. Sum of Digits
Link   : https://codeforces.com/contest/102/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N;
int ans = 0;
int digit_sum(int x, int base=10);

char c;

int main () {

    int no_digits = 0;

    while (scanf("%c", &c) && c != '\n') {
        N += int(c-'0');
        no_digits++;
    }
    
    ans += (no_digits > 1);

    while (N > 9){
        N = digit_sum(N);
        ans++;
    }
    
    printf("%d\n", ans);
    return 0;
}

int digit_sum(int x, int base){

    int s = 0;
    
    while (x){
        s += x%base;
        x /= base;
    }
    
    return s;
}

/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
