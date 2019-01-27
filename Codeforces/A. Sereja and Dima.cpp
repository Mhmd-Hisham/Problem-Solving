#include <bits/stdc++.h>
/*
Problem: A. Sereja and Dima
Link   : https://codeforces.com/contest/381/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;
int sereja = 0, dima = 0;// scores
int cards[1001];

int main () {
	scanf("%d\n", &N);

	for (int i = 0; i < N; i++){
		cin >> cards[i];
	}

    int i = 0, j = N-1;
    while (i < N && j >= i){
		//Sereja turn
		if (cards[i] >= cards[j]) {sereja += cards[i]; cards[i] = 0; i++;}
		else {sereja += cards[j]; cards[j] = 0; j--;}

		//Dima turn
		if (cards[i] >= cards[j]) {dima += cards[i]; cards[i] = 0; i++;}
		else {dima += cards[j]; cards[j] = 0; j--;}
	}
    
    printf("%d %d\n", sereja, dima);
	return 0;
}
/*
Sample input:-
-----------------
7
1 2 3 4 5 6 7

Sample output:-
-----------------
16 12

Resources:-
-------------

Explanation:
---------------

*/
