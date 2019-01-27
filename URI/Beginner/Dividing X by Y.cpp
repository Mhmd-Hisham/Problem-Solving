#include <bits/stdc++.h>

using namespace std;

int N = 0;
double x = 0, y = 0;
vector<double> A;

int main () {
	cin >> N;

	for ( int i = 0; i < N; i++){
		cin >> x >> y;
		A.push_back(x);
		A.push_back(y);
	}
	
	for (int i = 1; i < A.size(); i+= 2){
		if ( A[i] == 0 ) cout << "divisao impossivel\n";
		else printf("%.1f\n", A[i-1]/A[i]);
	}
	
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
