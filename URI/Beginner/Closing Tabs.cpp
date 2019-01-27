#include <bits/stdc++.h>

using namespace std;

string v;
int N = 0, M = 0;

int main () {
	cin >> N >> M;
	
	for (int i = 0;i < M; i++){
		cin >> v;
		
		N += (v == "fechou")? 1 : -1;
	}
	
	cout << N << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
