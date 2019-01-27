#include <bits/stdc++.h>
/*
Problem: A. Twins
Link   : https://codeforces.com/contest/160/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, no_coins = 0;
int coins[101], left_sum = 0, taken_sum = 0;

int main () {
	scanf("%d\n", &N);

	for (int i = 0; i < N; i++){
    	scanf("%d", &coins[i]);
		left_sum += coins[i];
	}
    
    sort(coins, coins+N, greater<>());

	for (int i = 0; i < N; i++){
    	taken_sum += coins[i];
		left_sum -= coins[i];
		no_coins++;
		if (taken_sum > left_sum) break;
	}

    
	printf("%d\n", no_coins);
	return 0;
}
/*
input:-
-----------
2
3 3

output:-
-----------
2

Resources:-
-------------

*/
