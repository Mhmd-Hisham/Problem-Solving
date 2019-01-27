#include <bits/stdc++.h>
/*
Problem: 11849 - CD
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2949

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, M, number;
set<int> Jack_cds, Jill_cds, intersection;

int main () {
    
    while ( scanf("%d %d\n", &N, &M) && N && M ){

        while ( N-- ){
            scanf("%d\n", &number);
            Jack_cds.insert(number);
        }
        
        while ( M-- ){
            scanf("%d\n", &number);
            Jill_cds.insert(number);
        }
        
        set_intersection(Jack_cds.begin(), Jack_cds.end(), 
                         Jill_cds.begin(), Jill_cds.end(),
                         inserter(intersection, intersection.begin()));

        printf("%zu\n", intersection.size());
        
        Jack_cds.clear();
        Jill_cds.clear();
        intersection.clear();
    }
    
	return 0;
}

/*
Sample input:-
-----------------
3 3
1
2
3
1
2
4
0 0

Sample output:-
-----------------
2

Resources:-
-------------
https://stackoverflow.com/questions/13448064/how-to-find-the-intersection-of-two-stdset-in-c
https://www.geeksforgeeks.org/std-set_intersection-in-cpp/
http://www.cplusplus.com/reference/algorithm/set_intersection/
http://www.cplusplus.com/reference/set/set/
https://stackoverflow.com/questions/2524611/how-can-one-print-a-size-t-variable-portably-using-the-printf-family
https://stackoverflow.com/questions/502856/whats-the-difference-between-size-t-and-int-in-c
*/
