#include <bits/stdc++.h>
/*
Problem: Graph traversal
Link   : 

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/


using namespace std;

int N;
int graph[N][N], visited[N];
int topsort[N], idx = N;

void DFS(int node){
    if (visited[node]) return;
    
    visited[node] = 1;
    
    // process node
    
    //
    
    for (int child = 0; child < N; child++)
        if (graph[node][child])
            dfs(child);

    topsort[--idx] = node+1; // or just topsort[--idx] = node;
}

int main () {

    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
