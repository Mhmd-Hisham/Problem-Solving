#include <bits/stdc++.h>
/*
Problem: A. Free Ice Cream
Link   : https://codeforces.com/contest/686/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

char op;
int n, distressed = 0;                 // counters
long long int d = 0, x = 0;            // each d is (1 ≤  d ≤ 10**9), so we may need long long int to store the values of x

int main () {
	scanf("%d %lld\n", &n, &x);

	for (int i = 0; i < n; i++){
    	scanf("%c %lld\n", &op, &d);
    	
        if (op == '+') x += d;         // a person is giving d ice cream packs to Kay and Gerda
    	else {                         // a child wants d ice cream packs
    	    if ( d > x ) distressed++; // check if we have such amount
    	    else x-=d;
    	}
	    
	}

	printf("%lld %d\n", x, distressed);
	return 0;
}
/*
input:-
-----------
5 7
+ 5
- 10
- 20
+ 40
- 20

output:-
-----------
22 1

Resources:-
-------------

*/
