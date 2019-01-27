#include <bits/stdc++.h>
/*
Problem: A. Team
Link   : https://codeforces.com/contest/231/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, will_impl = 0, will_solve = 0;
int sure;

int main () {
	scanf("%d\n", &N);

    //iterate through each problem
	for (int i = 0; i < N; i++){
	    will_solve = 0;
		cin >> sure; will_solve += sure;
		cin >> sure; will_solve += sure;
		cin >> sure; will_solve += sure;

        if (will_solve > 1) will_impl++;
	}

	printf("%d\n", will_impl);
	return 0;
}
/*
input:-
-----------
3
1 1 0
1 1 1
1 0 0

output:-
-----------
2

*/
