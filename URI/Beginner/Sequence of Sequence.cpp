#include <bits/stdc++.h>

using namespace std;

int N = 0, l, c = 1;
string r;

string ToString( int n ){
	stringstream s;
	s << n;
	return s.str();
}

int main () {
	while (cin >> N && !cin.eof()){
		l = 1;
		r = "0 ";

		for (int i = 1; i <= N; i++){
			for (int j = 0; j < i; j++){
				r += ToString(i) + " ";
				l++;
			}
		}
		printf("Caso %d: %d %s\n", c, l, (l>1)? "numeros": "numero") ;
		cout << r.substr(0, r.size()-1) << "\n\n";

		c++;
	}

	return 0;
}

/*
In this case, instead of multiplying, 
you add the total number of numbers to the sequence with the value of the next number in the sequence.
n2 = 0 1 2 2 (4)
4 + 3 = 7

n0 = 1, 0 
n1 = 2(1+0),    0 1
n2 = 4(2+2),    0 1 2 2
n3 = 7(4+3),    0 1 2 2 3 3 3
n4 = 11(7+4),   0 1 2 2 3 3 3 4 4 4 4
n5 = 16(11+5),  0 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5
n6 = 22(16+6),  0 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 6 6 6 6 6 6


*/
/*
input:-
-----------

0 1 2 3
output:-
-----------
0
1
2
3
4
5
6
7
8
9
10



Problem: 
*/
