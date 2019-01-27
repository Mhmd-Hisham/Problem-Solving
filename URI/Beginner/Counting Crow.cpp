#include <bits/stdc++.h>

using namespace std;

string s;
int N = 0;
int p1 = 0, p2 = 0, p3 = 0;

int main () {
	while (cin >> s && !cin.eof()){
		if ( s[0] == 'c' ) {
			cin >> s;
			cout << N << '\n';
			N = 0;
		}
		else{
			p1 = (s[0] == '*')? 1 : 0;
			p2 = (s[1] == '*')? 1 : 0;
			p3 = (s[2] == '*')? 1 : 0;
			
			N += (p1 << 2) + ( p2 << 1 ) + p3;
		}
	}
	
	return 0;
}
/*
input:-
-----------
--*
caw caw
*--
caw caw
caw caw 


--*
--*
--*
caw caw 

output:-
-----------


Problem: 
*/
