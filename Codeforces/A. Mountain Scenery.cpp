#include <bits/stdc++.h>
/*
Problem: A. Mountain Scenery
Link   : https://codeforces.com/contest/218/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, K;
int Ri[203];  // 2*max(N)+2

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    
    int end = 2*N+1;
    
    for (int i = 1; i <= end; i++){
        cin >> Ri[i];
    }
    
    for (int x = 2; (x <= end); x+=2){
        if ((Ri[x-1] < Ri[x]-1) && (Ri[x]-1 > Ri[x+1])){
            K--;
            Ri[x]--;
            if (K == 0) break;
        }
    }

    for (int i = 1; i <= end; i++){
        cout << Ri[i] << ' ';
    }

    return 0;
}
/*
Sample input:-
-----------------
3 2
0 5 3 5 1 5 2

Sample output:-
-----------------
0 4 3 4 1 5 2 

Resources:-
-------------
Video Solution (Arabic) [Eng John Gamal]: https://www.youtube.com/watch?v=qmGhxFPv5GI&feature=youtu.be


Explanation:
---------------

*/
