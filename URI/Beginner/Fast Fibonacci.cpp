#include <bits/stdc++.h>

using namespace std;

double N = 0;
double sq5 = 2.23606797749979;

inline double fast_fibonacci( double n ){
	return (pow(((1+sq5)/2),n)-pow(((1-sq5)/2),n))/sq5;
}

int main () {
	scanf("%lf", &N);
	printf("%.1lf\n", fast_fibonacci(N));
	return 0;
}

/*
def fast_fibo(n):
	sq5 = math.sqrt(5)
	return ((((1+sq5)/2)**n)-(((1-sq5)/2)**n))/sq5

input:-
-----------


output:-
-----------


Problem: 
*/
