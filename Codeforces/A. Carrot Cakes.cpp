#include <bits/stdc++.h>
/*
Problem: A. Carrot Cakes
Link   : https://codeforces.com/contest/799/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int n, t, k, d;
int o1 = 0, o2 = 0, baked = 0, minutes;
bool isready = false;

int main () {
	scanf("%d %d %d %d\n", &n, &t, &k, &d);

    // Simulate with one oven
    while (baked < n){
        baked += k;
        o1 += t;
    }
    
    // Simulate the process minute by minute with 2 ovens
    baked = 0;

    minutes = 1; // we start from the very first minute
    while (baked < n){
        if (minutes%t == 0) baked+=k;                           // if t min(s) has passed, increase baked
        if (minutes == d) {isready = true;}                     // Second oven is ready to bake
        else if (isready) {if ((minutes-d)%t == 0) baked+=k;}   // if t min(s) has passed after the second oven has been built, baked+=k
        minutes++;                                              // increase time one minute
    }

    o2 = minutes-1;

    // compare results
    printf( (o2 < o1)? "YES" : "NO");
	
	return 0;
}
/*

input:-
-----------
8 6 4 5

output:-
-----------
YES

*/
