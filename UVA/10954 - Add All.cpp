#include <bits/stdc++.h>
/*
Problem: 10954 - Add All
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1895

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;
priority_queue<int> numbers;

int main () {

	while ( scanf("%d\n", &N) && N != 0){
	    int cost = 0, number, n1, n2;

	    while (N--){
	        scanf("%d ", &number);
            numbers.push(-number);
	    }
	    
        while (numbers.size() > 1){
            n1 = -numbers.top(); numbers.pop();
            n2 = -numbers.top(); numbers.pop();
            numbers.push(-(n1+n2));
            cost += (n1+n2);
        }

        numbers.pop();// Just to clear the queue for the next testcase

        printf("%d\n", cost);
	}
	
	return 0;
}
/*
input:-
-----------
3
1 2 3
4
1 2 3 4
0

output:-
-----------
9
19

Resources:-
-------------
http://www.cplusplus.com/reference/queue/priority_queue/
https://stackoverflow.com/questions/2852140/priority-queue-clear-method
*/
