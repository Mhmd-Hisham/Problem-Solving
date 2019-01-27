#include <bits/stdc++.h>
/*
Problem: 11933 - Splitting Numbers
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3084

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

long long int N, n1, n2;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while ( cin >> N && N ){
        bool even = 1; // the first bit index is 0 and 0 is an even number
        n1 = 0, n2 = 0;

	    for (int i = 0; i < 32; i++){
	        if ( !(N & (1<<i)) ) continue;

	        if ( even ) n1 |= (1<<i);
	        else n2 |= (1<<i);

	        even = !even;
	    }
        
    	cout << n1 << " " << n2 << '\n';
	}

	return 0;
}

/*
Sample input:-
-----------------
6
7
13
0

Sample output:-
-----------------
2 4
5 2
9 4


Resources:-
-------------
https://www.geeksforgeeks.org/c-bitset-and-its-application/

Explanation:
---------------

*/
