#include <bits/stdc++.h>

using namespace std;

int N = 0;
vector<double> out;
double A = 0, B = 0, C = 0;

int main () {
	cin >> N;
	
	while (N--) {
		cin >> A >> B >> C;
		out.push_back((A*2 + B*3 + C*5)/10);
	}
	
	for (int i = 0; i < out.size(); i++)
		printf("%.1f\n", out[i]);

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
