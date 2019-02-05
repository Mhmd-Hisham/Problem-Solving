#include <bits/stdc++.h>
/*
Problem: A. IQ Test
Link   : https://codeforces.com/contest/287/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

char paper[4][4];

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> paper[i][j];
            paper[i][j] = (paper[i][j] == '.')? 1 : 0; 
        }    
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            
            if ((paper[i][j] + paper[i][j+1] + paper[i+1][j] + paper[i+1][j+1]) != 2){
                cout << "YES\n";
                return 0;
            }

        }
    }

    cout << "NO\n";
    return 0;
}
/*
Sample input:-
-----------------
####
....
####
....

Sample output:-
-----------------
NO

Resources:-
-------------
Video Solution (Arabic) [Eng Mostafa Saad]: https://www.youtube.com/watch?v=n7uY7HC4XIM

Explanation:
---------------

*/
