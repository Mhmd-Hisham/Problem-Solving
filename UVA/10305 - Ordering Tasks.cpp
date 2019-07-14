#include <bits/stdc++.h>
/*
Problem: 10305 - Ordering Tasks
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1246

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, M;
int graph[1001][1001];
int visited[1001];
int topsort[1001], idx;

void DFS(int node){
    if (visited[node]) return;
    
    visited[node] = true;
    
    for (int child = 0; child < N; ++child){
        if (graph[node][child] && !visited[child])
            
            DFS(child);
    }
    
    topsort[--idx] = node+1;
}

int main () {
    fastio;
    
    while (cin >> N >> M && N){
        
        memset(visited, 0, sizeof(visited));
        memset(topsort, 0, sizeof(topsort));
        memset(graph, 0, sizeof(graph[0][0]) * N * N);
        
        idx = N;

        int i, j;
        while (M--){
            cin >> i >> j;
            graph[i-1][j-1] = 1;
        }
        
        for (int node = 0; node < N; node++)
            if (!visited[node]) DFS(node);
    
        for (int i = 0; i < N; ++i)
            cout << topsort[i] << ' ';
        
        cout << '\n';
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

4 1 5 2 3 


Resources:-
-------------


Explanation:
---------------

*/
