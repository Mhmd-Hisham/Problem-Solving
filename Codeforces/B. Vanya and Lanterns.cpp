#include <bits/stdc++.h>
/*
Problem: B. Vanya and Lanterns
Link   : https://codeforces.com/contest/492/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define EPS 1e-10

int N, L;
int lanterns[1000];

bool valid(double d);

int main () {
    
    scanf("%d%d", &N, &L);
    
    for (int i = 0; i < N; ++i)
        scanf("%d", &lanterns[i]);
    
    sort(lanterns, lanterns+N);
        
    double d = 0, l = 0, r = L;
    
    while ( l+EPS <= r ){
        d = (r+l)/2.0;
            
        if (valid(d)) r = d;
        else l = d;
    }
    
    printf("%0.10lf\n", d);
    
    return 0;
}

bool valid(double d){
        
    double point = 0.0;
    
    for (int i = 0; i < N; ++i){
        if (lanterns[i]-d <= point){
            point = lanterns[i]+d;
        }
        else return false;
    }
    
    return point >= L;
}

/*
Sample input:-
-----------------
7 15
15 5 3 7 9 14 0

Sample output:-
-----------------
2.5000000000

Resources:-
-------------

Explanation:
---------------

*/
