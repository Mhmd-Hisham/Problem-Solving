#include <bits/stdc++.h>
/*
Problem: A. Is it rated?
Link   : https://codeforces.com/contest/807/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;
int before[1001], after[1001];

string is_it_rated(){
    for (int i = 0; i < N; i++){
        if (before[i] != after[i]){
            return "rated";
        }
    }
    
    for (int i = 0; i < N-1; i++){
        if (before[i] < before[i+1]){
            return "unrated";
        }
    }

    return "maybe";
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0;i < N; i++)
		cin >> before[i] >> after[i];

	cout << is_it_rated() << '\n';
	return 0;
}
/*
input:-
-----------
5
3123 3123
2777 2777
2246 2246
2246 2246
1699 1699

output:-
-----------


Resources:-
-------------

*/
