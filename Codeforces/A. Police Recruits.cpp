#include <bits/stdc++.h>
/*
Problem: A. Police Recruits
Link   : https://codeforces.com/contest/427/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, v = 0;
int untreated = 0, officers = 0;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	scanf("%d\n", &N);
	
	for (int i = 0; i < N; i++){
		scanf("%d", &v);
		if (v == -1){
		    if (officers) officers--;
		    else untreated++;
		}
		else officers += v;
	}

	printf("%d\n", untreated);
	return 0;
}
/*
input:-
-----------
11
-1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1

output:-
-----------
8

Resources:-
-------------

*/
