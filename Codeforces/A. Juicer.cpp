#include <bits/stdc++.h>
/*
Problem: A. Juicer
Link   : https://codeforces.com/contest/709/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, b, d;
int waste = 0, times = 0, orange_size = 0;

int main () {
	scanf("%d %d %d\n", &N, &b, &d);
	
	for (int i = 0; i < N; i++){
    	scanf("%d", &orange_size);
    	if (orange_size > b) continue;

    	waste += orange_size;

    	if (waste > d) {times++; waste = 0;}
	}

	printf("%d\n", times);
	return 0;
}
/*
input:-
-----------
3 10 10
5 7 7

output:-
-----------
1

Resources:-
-------------

*/
