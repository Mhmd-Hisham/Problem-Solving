#include <bits/stdc++.h>
/*
Problem: B. Fedor and New Game
Link   : https://codeforces.com/problemset/problem/467/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, M, K;
int players[1002], Fedor, friends = 0;

int count_bits(int number){
    int count = 0;
    while (number){
        number &=(number-1);
        count++;
    }
    
    return count;
}

int main () {
	scanf("%d %d %d\n", &N, &M, &K);

    int Z = (1<<N)-1; // and-it to get the first N bits of a number only

	for (int i = 0; i < M; i++){
    	scanf("%d\n", &players[i]);
	}

	scanf("%d\n", &Fedor);
	
	Fedor &= Z;

	for (int i = 0; i < M; i++){
    	if (count_bits((Fedor) ^ (players[i]&Z)) <= K ) friends++;
	}


    printf("%d\n", friends);
	return 0;
}
/*
Sample input:-
-----------------
7 3 1
8
5
111
17

Sample output:-
-----------------
0

Resources:-
-------------

Explanation:
---------------

*/
