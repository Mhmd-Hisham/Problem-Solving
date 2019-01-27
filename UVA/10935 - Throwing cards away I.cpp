#include <bits/stdc++.h>
/*
Problem: 10935 - Throwing cards away I
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1876

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while ( cin >> N && N != 0 ){
        //initialize the queue
        queue<int> deck;
        for (int i = 1; i <= N; i++){
            deck.push(i);
        }

        printf("Discarded cards:");

        if (deck.size() >= 2){
            printf(" %d", deck.front());
            deck.pop();
            deck.emplace(deck.front());
            deck.pop();
        }

        while (deck.size() >= 2){
            printf(", %d", deck.front());
            deck.pop();
            deck.emplace(deck.front());
            deck.pop();
        }
        printf("\nRemaining card: %d\n", deck.front());
        
	}
	return 0;
}
/*
input:-
-----------
7
19
10
6
0

output:-
-----------
Discarded cards: 1, 3, 5, 7, 4, 2
Remaining card: 6
Discarded cards: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 4, 8, 12, 16, 2, 10, 18, 14
Remaining card: 6
Discarded cards: 1, 3, 5, 7, 9, 2, 6, 10, 8
Remaining card: 4
Discarded cards: 1, 3, 5, 2, 6
Remaining card: 4

Resources:-
-------------
http://www.cplusplus.com/reference/queue/queue/
https://www.geeksforgeeks.org/queue-cpp-stl/
https://www.tutorialspoint.com/cpp_standard_library/queue.htm

*/
