#include <bits/stdc++.h>
/*
Problem: Root-finding algorithms (bisection, Secant, Newtwon's, Dekker's, ...
Link   : 

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;

#define EPS 1e-10
#define MAX_ITER 1e+6


double f(double x){
    return x*x - 4; // any function
}

double fd(double x){
    return 2*x; // the derivative of function f
}

double newton_method(double l, double r, double default_value){
    // https://www.youtube.com/watch?v=mztGjg04rV8
    // requires the function to differentiable over the interval [l, r]
    
    if (f(l) * f(r) > 0) return default_value; // No solution
    if (fabs(f(l)) <= EPS) return l;
    if (fabs(f(r)) <= EPS) return r;
    
    for (double x = (l+r)/2.0; ; ){
        double x1 = x - f(x)/fd(x); // according to newton's law
        if (fabs(x1-x) <= EPS) return x;
        x = x1;
    }
}

double dekker_method(double l, double r, double default_value){

    if (f(l) * f(r) > 0) return default_value; // No solution
    if (fabs(f(l)) <= EPS) return l;
    if (fabs(f(r)) <= EPS) return r;
    
    double c = l;
    while ( fabs(r-l) <= EPS ){
        if ( fabs(f(l)) < fabs(f(r)) ) swap(l, r);
        
        mid = (r+l)/2.0;
        
        s = (f(l) == f(r))? mid : (f(x1) * (x1-x0))/(f(x1) - f(x0));

        l =
        r =
        c = r;
    }

}

double secant_method(double l, double r, double default_value){
    // https://www.youtube.com/watch?v=mztGjg04rV8
    
    if (f(l) * f(r) > 0) return default_value; // No solution
    if (fabs(f(l)) <= EPS) return l;
    if (fabs(f(r)) <= EPS) return r;
    
    double delta;
    for (double x0 = l, x1 = r; ; ){
        delta = (f(x1) * (x1-x0))/(f(x1) - f(x0));
    
        if (fabs(delta) <= EPS) return x1;
    
        x0 = x1;
        x1 = x1 - delta;
    }
}

double false_position(double l, double r, double default_value){
    // https://www.geeksforgeeks.org/program-for-method-of-false-position/
    // https://en.wikipedia.org/wiki/False_position_method
    // https://www.youtube.com/watch?v=mztGjg04rV8
    
    if (f(l) * f(r) > 0) return default_value; // No solution
    if (fabs(f(l)) <= EPS) return l;
    if (fabs(f(r)) <= EPS) return r;
    
    double p;
    for (int i = 0; i < MAX_ITER; ++i){
        p = (l*f(r) - r*f(l))/(f(r) - f(l));

        if (fabs(f(p)) <= EPS) r = p;
        else l = p;
    }
    
    return p;
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

double bisection(double l, double r, double default_v=-1){
    double ans = default_v;

    while ( fabs(r-l) > TOL ){
        mid = l+(r-l)/2;
            
        if (f(mid) <= TOL){
            ans = mid;
            r = mid;
        } else l = mid;
    }
    
    return ans;
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
