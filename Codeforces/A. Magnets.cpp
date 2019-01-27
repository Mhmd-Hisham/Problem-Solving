#include <bits/stdc++.h>
/*
Problem: A. Magnets
Link   : https://codeforces.com/contest/344/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;


int N, groups = 1;// there will be at least one group (1 ≤ n ≤ 100000)
string last_magnet, next_magnet;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    cin >> N;

    cin >> last_magnet;    
    for (int i = 1; i < N; i++){
        cin >> next_magnet;
        if (last_magnet != next_magnet) groups++;
        last_magnet = next_magnet;
    }
    
	cout << groups << '\n';
	return 0;
}
/*
input:-
-----------
6
10
10
10
01
10
10

output:-
-----------
3
*/
