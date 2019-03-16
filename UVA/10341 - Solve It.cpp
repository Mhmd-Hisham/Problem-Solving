#include <bits/stdc++.h>
/*
Problem: 10341 - Solve It
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1282

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

#define EPS 1e-15
#define MAX_ITER 1e+6

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int P, Q, R, S, T, U;

double f(double x);
double fd(double x);
double bisection(double l, double r, double default_value);

int main (){

    while ( scanf("%d%d%d%d%d%d", &P, &Q, &R, &S, &T, &U) != EOF ){
        
        double ans = bisection(0, 1, -1);
        if (ans == -1) {puts("No solution"); continue; }
        
        printf("%.4lf\n", ans);
    }
    
    return 0;
}

double bisection(double l, double r, double default_value){
    // https://www.youtube.com/watch?v=mztGjg04rV8
    
    if (f(l) * f(r) > 0) return default_value; // No solution
 
    double mid;
    while ( l+EPS < r ){
        mid = (r+l)/2;
            
        if (f(mid) <= EPS) r = mid;
        else l = mid;
    }
    
    return mid;
}

double f(double x){
    return P*exp(-x) + Q*sin(x) + R*cos(x) + S*tan(x) + T*(x*x) + U;
}

double fd(double x){
    return -P*exp(-x) + Q*cos(x) - R*sin(x) + S/(cos(x)*cos(x)) + 2*T*x;
}

/*
Sample input:-
-----------------
0 0 0 0 -2 1
1 0 0 0 -1 2
1 -1 1 -1 -1 1

Sample output:-
-----------------
0.7071
No solution
0.7554

Resources:-
-------------

Explanation:
---------------

*/
