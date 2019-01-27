#include <bits/stdc++.h>
/*
Problem: A. Anton and Danik
Link   : https://codeforces.com/contest/734/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, A, D;
string S;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> S;
	
	A = count(S.begin(), S.end(), 'A');
	D = count(S.begin(), S.end(), 'D');
    
    if (A == D)
        cout << "Friendship\n";

    else if (A > D)
        cout << "Anton\n";

    else
        cout << "Danik\n";

	return 0;
}
/*
input:-
-----------
6
ADAAAA

output:-
-----------
Anton

*/
