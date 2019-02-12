#include <bits/stdc++.h>
/*
Problem: 10452 - Marcus
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1393

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;


int T, N, M;
char stones[8][8];

int I, J;
string path[8] = {};
string word = "@IEHOVA#";

void dfs(int i, int j, int k, string direction){
    if (i < 0 || j < 0 || j >= N || i >= M) return;
    if (stones[i][j] != word[k]) return;

    path[k] = direction;
    if (word[k] == '#') return;
    k++;

    //            (i-1, j)
    //   (i, j-1)  (i, j)  (i, j+1)
    dfs(i-1, j, k, "forth");
    dfs(i, j-1, k, "left");
    dfs(i, j+1, k, "right");
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    
    while ( T-- ){
        cin >> M >> N;
        cin.ignore();

        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                cin.get(stones[i][j]);

                if (stones[i][j] == '@') {
                    I = i;
                    J = j;
                }
            }
            cin.ignore();
        }

        dfs(I, J, 0, "start");

        for (int i = 1; i < 7; i++){
            cout << path[i] << ' ';
        } cout << path[7] << '\n';

    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
6 5
PST#T
BTJAS
TYCVM
YEHOF
XIBKU
N@RJB
5 4
JA#X
JVBN
XOHD
DQEM
T@IY

Sample output:-
-----------------
forth forth right right forth forth forth
right forth forth left forth forth right

Resources:-
-------------
Video Solution (Arabic) (c++) [Eng Ayman Salah]: https://www.youtube.com/watch?v=HtaczlDLylk

Explanation:
---------------

*/
