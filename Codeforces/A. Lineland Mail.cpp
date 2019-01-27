#include <bits/stdc++.h>
/*
Problem: A. Lineland Mail
Link   : https://codeforces.com/contest/567/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, rightmost = 0, leftmost = 0;
int max_dist = 0, min_dist = INT_MAX;

int main () {
	scanf("%d\n", &N);

    int city[N];

	for (int i = 0; i < N; i++){
    	scanf("%d", &city[i]);
	}
	
    rightmost = city[0];
    leftmost = city[N-1];
    
	for (int i = 0; i < N; i++){
    	max_dist = max(abs(city[i]-leftmost), abs(city[i]-rightmost));

    	if (i+1 == N) min_dist = abs(city[i]-city[i-1]);                                    // rightmost
    	else if (i-1 == -1) min_dist = abs(city[i]-city[i+1]);                              // leftmost
    	else min_dist = min(abs(city[i]-city[i-1]), abs(city[i]-city[i+1]) );               // middle
    	
    	printf("%d %d\n", min_dist, max_dist);
	}
	
	return 0;
}
/*
input:-
-----------
4
-5 -2 2 7

output:-
-----------
3 12
3 9
4 7
5 12


Resources:-
-------------

*/
