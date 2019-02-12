#include <bits/stdc++.h>
/*
Problem: 10305 - Ordering Tasks
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1246

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, M, i, j;

bool visited[102];
int graph[102][102], topsort[102], idx;

void dfs(int node){
    visited[node] = 1;
    
    for (int child = 0; child < N; child++){
        if (graph[node][child] && !visited[child])
            dfs(child);
    }
    
    topsort[idx] = node+1; idx--;
}

int main () {

    while ( scanf("%d %d\n", &N, &M) && N && M ){
        memset(visited, 0, sizeof(visited));
        memset(graph, 0, sizeof(graph));
        
        idx = N-1;        
        while (M--){
            scanf("%d %d\n", &i ,&j);
            graph[i-1][j-1] = 1;
        }

        for (int parent = 0; parent < N; parent++){
            if (!visited[parent]) dfs(parent);
        }
        
        for (int i = 0; i < N-1; i++)
            printf("%d ", topsort[i]);
        
        printf("%d\n", topsort[N-1]);
    }

    return 0;
}
/*
Sample input:-
-----------------
5 4
1 2
2 3
1 3
1 5
0 0

Sample output:-
-----------------
1 4 2 5 3

Resources:-
-------------
Video Solution (Arabic) (c++) [Eng Yahia Ashraf]: https://www.youtube.com/watch?v=4t-4ZC8BRj8

Explanation:
---------------

*/
