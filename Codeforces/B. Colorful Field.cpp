#include <bits/stdc++.h>
/*
Problem: B. Colorful Field
Link   : https://codeforces.com/contest/79/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define PI acos(-1)
#define EPS 1e-10

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, M, K, T;

int a, b, i, j;
int waste[1001];
char plants[3] = {'C', 'K', 'G'};

int main () {
    fastio;
    
    cin >> N >> M >> K >> T;
    
    for (int i = 0; i < K; ++i){
        cin >> a >> b;
        waste[i] = (a-1)*M + (b-1);
    }

    int idx;
    while ( T-- ){
        cin >> i >> j;
        idx = (i-1)*M + (j-1);
        
        int x = 0;
        bool iswaste = false;

        for (int i = 0; i < K; ++i){
            if (waste[i] < idx) x++;
            else if (waste[i] == idx) iswaste = true;
        }
        
        char plant = plants[(idx-x)%3];

        if (iswaste) cout << "Waste\n";        
        else if (plant == 'C') cout << "Carrots\n";
        else if (plant == 'K') cout << "Kiwis\n";
        else if (plant == 'G')  cout << "Grapes\n";
    }

    return 0;   
}

/*
Sample input:-
-----------------
4 5 5 6
4 3
1 3
3 3
2 5
3 2
1 3
1 4
2 3
2 4
1 1
1 1

Sample output:-
-----------------
Waste
Grapes
Carrots
Kiwis
Carrots
Carrots

Resources:-
-------------

Explanation:
---------------
  12345
1 ..R..
2 ....R
3 .RR..
4 ..R..


  12345
1 12R31
2 2312R
3 3RR12
4 31R23

*/
