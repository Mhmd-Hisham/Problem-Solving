#include <bits/stdc++.h>
/*
Problem: A. Counterexample
Link   : https://codeforces.com/contest/483/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

unsigned long long l, r;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> l >> r;
	if (r%2 != 0) r--; // Just to make sure that r is an even number
	if (r-l+1 < 3) cout << -1 << endl; // numbers in the range (inclusive, hence +1) are less than 3, so we can't generate the example
	else cout << r-2 << " " << r-1 << " " << r << "\n";

	return 0;
}
/*
Sample input:-
-----------------
2 4

Sample output:-
-----------------
2 3 4

Resources:-
-------------
[1]:https://en.wikipedia.org/wiki/Greatest_common_divisor

Explanation:
---------------
You can solve the problem through brute-forcing the answer since the constrains tells you
tha the maximum differece is 50  (1 ≤ l ≤ r ≤ 1018; r - l ≤ 50).

But, You can do Better!
All we need is 3 consecutive numbers that start with an even number. try it yourself (2 3 4)

GCD(2, 3) = 1
GCD(3, 4) = 1
GCD(2, 4) = 2  ----->> counter example

This is valid for any consecutive 3 integers starting with an even number.
try(1,2,3)

GCD(1, 2) = 1
GCD(2, 3) = 1
GCD(1, 3) = 1 ---->> won't work for us


GCD referes to Greatest Common Divisor (see resources)[1]
*/
