#include <bits/stdc++.h>
/*
Problem: A. Boy or Girl
Link   : https://codeforces.com/contest/236/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string username;
unordered_set< char> distinct;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> username;

	for (int i = 0; i < username.size(); i++)
        distinct.insert(username[i]);

    
	cout << ((distinct.size()%2 == 0)? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
	return 0;
}
/*
input:-
-----------
wjmzbmr

output:-
-----------
CHAT WITH HER!
*/
