#include <bits/stdc++.h>
/*
Problem: 11995 - I Can Guess the Data Structure!
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3146

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, op, x;

int main () {

    while ( scanf("%d\n", &N) != EOF ){
        stack<int> stack_bag;
        queue<int> queue_bag;
        priority_queue<int> priority_queue_bag;
            
        bool is_it_a_stack = 1, is_it_a_queue = 1, is_it_a_pqueue = 1;

        while ( N-- ){
            scanf("%d %d\n", &op, &x);
            if (op == 1) {
                stack_bag.push(x);
                queue_bag.push(x);
                priority_queue_bag.push(x);
            }
            
            else{
            
                if (stack_bag.size() > 0){
                    if (stack_bag.top() != x) is_it_a_stack = false;
                    stack_bag.pop();
                } else is_it_a_stack = false;


                if(queue_bag.size() > 0){
                    if (queue_bag.front() != x) is_it_a_queue = false;
                        queue_bag.pop();
                } else is_it_a_queue = false;
                
                if(priority_queue_bag.size() > 0){
                    if (priority_queue_bag.top() != x) is_it_a_pqueue = false;
                        priority_queue_bag.pop();
                } else is_it_a_pqueue = false;
                
            }
            
        }
        if(is_it_a_stack+is_it_a_queue+is_it_a_pqueue > 1)
            printf("not sure\n");

        else if(is_it_a_stack+is_it_a_queue+is_it_a_pqueue == 0)
            printf("impossible\n");
            
        else{
            if (is_it_a_stack) printf("stack\n");
            else if (is_it_a_queue) printf("queue\n");
            else printf("priority queue\n");
        }
    }
	
	return 0;
}
/*
Sample input:-
-----------------
6
1 2
1 1
1 3
2 2
2 1
2 3
6
1 2
1 1
1 3
2 3
2 1
2 2
6
1 2
1 1
1 3
2 3
2 2
2 1
6
1 2
1 1
1 3
2 1
2 2
2 3
6
1 1
1 2
1 3
2 3
2 2
2 1

Sample output:-
-----------------
queue
stack
priority queue
impossible
not sure


Resources:-
-------------
http://www.cplusplus.com/reference/stack/stack/
http://www.cplusplus.com/reference/queue/queue/
http://www.cplusplus.com/reference/queue/priority_queue/

*/
