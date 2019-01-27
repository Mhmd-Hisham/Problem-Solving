#include <bits/stdc++.h>
/*
Problem: 514 - Rails
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=455

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, M = 0;
int marshal_order[1002];

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while ( cin >> N && N != 0 ){
	    while (cin >> M && M != 0){

    	    stack< int> station;
    	    int next_coach = 1, idx = 0;

            station.push(-1);

	        for (int i = 1; i < N; i++){
                marshal_order[idx] = M;
                idx++;
	            cin >> M;
	        }
	        marshal_order[idx] = M;

	        idx = 0;
	        while (next_coach < N+1){
	            station.push(next_coach);

	            while (station.top() == marshal_order[idx]){
	                idx++;
	                station.pop();
	            }
	            next_coach++;
	        }
	        
	        cout << ((station.size() == 1)? "Yes" : "No") << '\n';
		}
		
		cout << '\n';
	}

	return 0;
}
/*
input:-
-----------
5
1 2 3 4 5
5 4 1 2 3
0
6
6 5 4 3 2 1
0

0

marshal_order:-
-----------
Yes
No

Yes

Resources:-
-------------
stack: http://www.cplusplus.com/reference/stack/stack/
https://www.geeksforgeeks.org/stack-data-structure-introduction-program/
https://www.tutorialspoint.com/cpp_standard_library/stack.htm
*/
