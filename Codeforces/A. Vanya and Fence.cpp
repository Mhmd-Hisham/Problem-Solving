#include <bits/stdc++.h>
/*
Problem: A. Vanya and Fence
Link   : https://codeforces.com/problemset/problem/677/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int width = 0, hi;
int N = 0, h = 0;

int main () {

	scanf("%d %d\n", &N, &h);

	for (int i = 0; i < N; i++){
		scanf("%d", &hi);
		width += (hi <= h)? 1 : 2;
	}

	printf("%d\n", width);
	return 0;
}
/*
input:-
-----------
3 7
4 5 14

output:-
-----------
4

*/
