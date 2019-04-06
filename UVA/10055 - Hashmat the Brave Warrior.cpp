#include <bits/stdc++.h>
/*
Problem: 10055 - Hashmat the Brave Warrior
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=996

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

ll n1, n2; // n1 --> Hashmat's soldiers, n2 --> opponent's soldiers

int main () {

    while (scanf("%lld%lld", &n1, &n2) != EOF){

        printf("%lld\n", abs(n1-n2));

    }

    return 0;
}
/*
Sample input:-
-----------------
10 12
10 14
100 200

Sample output:-
-----------------
2
4
100

Resources:-
-------------

Explanation:
---------------

*/
