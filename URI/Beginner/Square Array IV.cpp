#include <bits/stdc++.h>

using namespace std;

int l = 0, t = 0;
int a = 0, b = 0;

int main () {
	
	while ( cin >> t && !cin.eof() ){
		a = t/3;
		b = a;
		for (double i = 0; i < t; i++){
			for (double j = 0; j < t; j++){
				
				if ( i == a && j == b ){
					l = 1;
					if ( i == j && i == t/2 && t%2 != 0 ) l = 4;
					if ( b < (t-t/3)-1 ) b++;
					else {b = t/3; a += (a < (t-t/3)-1)? 1 : 0;}
				}
				
				else if (i == j) {
					if ( i != t/2 ) l = 2;
				}
				else if (i+j == t-1){
					l = 3;
				}
				else l = 0;
				cout << l;
			}
			cout << '\n';
		}
		cout << '\n';
	}	
		
	return 0;
}
/*
input:-
-----------
5 0

20003
01110
01410
01110
30002

20003
01110
01410
01110
30002


(0,4)  = 4
(1,3)  = 4
(2,2)  = 4
(3,1)  = 4
(4,1)  = 4


1 2 3 4 5 0



output:-
-----------


Problem: 
*/
