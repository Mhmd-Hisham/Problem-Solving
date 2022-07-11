#include <bits/stdc++.h>
/*
Problem: A. Is your horseshoe on the other hoof?
Link   : https://codeforces.com/contest/228/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int s1, s2, s3, s4;
unordered_set< int> horseshoes;

int main () {
	scanf("%d %d %d %d\n", &s1, &s2, &s3, &s4);
    
    horseshoes.insert(s1);
    horseshoes.insert(s2);
    horseshoes.insert(s3);
    horseshoes.insert(s4);

	printf("%d\n", int(4-horseshoes.size()));
	return 0;
}
/*
input:-
-----------
1 7 3 3

output:-
-----------
1

Resources:-
-------------
unordered_set : http://www.cplusplus.com/reference/unordered_set/unordered_set/
*/
