#include <bits/stdc++.h>
/*
Problem: A. Gravity Flip
Link   : https://codeforces.com/contest/405/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;
int A[101];

// O(1)
// well, It is O(n.log(n)).. but since max(N) is 100.. You can safely say it is O(1) :D
int main () {
	scanf("%d\n", &N);

	for (int i = 0; i < N; i++){
    	scanf("%d\n", &A[i]);
	}
	
    sort(A, A+N);
    
	for (int i = 0; i < N; i++){
    	printf("%d ", A[i]);
	}
	
	printf("\n");

	return 0;
}
/*
input:-
-----------
4
3 2 1 2

output:-
-----------
1 2 2 3

*/
