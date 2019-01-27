#include <bits/stdc++.h>
/*
Problem: A. Bear and Big Brother
Link   : https://codeforces.com/contest/791/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int a = 0, b = 0, years = 0;

int main () {
	scanf("%d %d\n", &a, &b);
	
    while (a <= b){
        a*=3;
        b*=2;
        years++;
    }
    
	printf("%d\n", years);
	return 0;
}
/*
input:-
-----------
4 7

output:-
-----------
2
*/
