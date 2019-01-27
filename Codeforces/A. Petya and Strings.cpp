#include <bits/stdc++.h>
/*
Problem: A. Petya and Strings
Link   : https://codeforces.com/contest/112/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;
string A = "", B = "";

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> A >> B;
	
	for (int i = 0; i < A.size(); i++){
	    if (tolower(A[i]) != tolower(B[i])){
	        if (tolower(A[i]) > tolower(B[i])) {N = 1;}
	        else {N = -1;}
	        break;
	    }
	}

	printf("%d\n", N);
	return 0;
}
/*
input:-
-----------
abcdefg
AbCdEfF

output:-
-----------
1
*/
