#include <bits/stdc++.h>
/*
Problem: A. Panoramix's Prediction
Link   : https://codeforces.com/contest/80/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

bool wait = false;
int N = 0, M = 0;
int primes[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, -1};

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	
	for (int i = 0; i < 15; i++){
	    if (primes[i] == N){
	        wait = (primes[i+1] == M)? true : false;
            break;
	    }
	}
	
	cout << ((wait)? "YES" : "NO") << '\n';
	return 0;
}
/*
Sample input:-
-----------------
3 5

Sample output:-
-----------------
YES

Resources:-
-------------

Explanation:
---------------

*/
