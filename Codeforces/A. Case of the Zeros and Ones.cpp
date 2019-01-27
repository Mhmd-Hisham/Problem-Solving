#include <bits/stdc++.h>
/*
Problem: A. Case of the Zeros and Ones
Link   : https://codeforces.com/contest/556/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, ones, zeros;
string ones_and_zeros;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> ones_and_zeros;
	//Note: you can also simulate the process, but why when you don't have to?
	ones = count(ones_and_zeros.begin(), ones_and_zeros.end(), '1');
    zeros = ones_and_zeros.length()-ones;
    
	cout << abs(ones-zeros) << '\n';
	return 0;
}

/*
input:-
-----------
8
11101111

output:-
-----------
6

Resources:-
-------------
http://www.cplusplus.com/reference/cstdlib/abs/
https://www.geeksforgeeks.org/std-count-cpp-stl/
https://stackoverflow.com/questions/3867890/count-character-occurrences-in-a-string
http://www.cplusplus.com/reference/algorithm/count/
*/
