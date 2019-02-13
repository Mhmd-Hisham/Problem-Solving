#include <bits/stdc++.h>
/*
Problem: A. Anton and Danik
Link   : https://codeforces.com/contest/734/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, A, D;
char ch;

int main (){
    scanf("%d\n", &N);
    
    while (N--){
        scanf("%c", &ch);
        A += ch == 'A';
        D += ch == 'D';
    }
    
    if (A == D)
        printf("Friendship\n");

    else if (A > D)
        printf("Anton\n");

    else
        printf("Danik\n");

    return 0;
}
/*
Sample input:-
-----------------
6
ADAAAA

Sample output:-
-----------------
Anton

Resources:-
-------------

Explanation:
---------------

*/
