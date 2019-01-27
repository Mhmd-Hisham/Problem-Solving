#include <bits/stdc++.h>
/*
Problem: A. Oath of the Night's Watch
Link   : https://codeforces.com/contest/768/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, support = 0;

int max_strength = 0;
int min_strength = INT_MAX;

int main () {

	scanf("%d\n", &N);
    int stewards[N];
    
	for (int i = 0; i < N; i++){
    	scanf("%d", &stewards[i]);
    	min_strength = min(stewards[i], min_strength);
    	max_strength = max(stewards[i], max_strength);
	}

	for (int i = 0; i < N; i++){
    	if (min_strength < stewards[i] && stewards[i] < max_strength) support++;
	}

    printf("%d\n", support);
	return 0;
}
/*
input:-
-----------
2
1 5

output:-
-----------
0

Resources:-
-------------

*/
