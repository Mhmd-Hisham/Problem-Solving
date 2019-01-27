#include <bits/stdc++.h>

using namespace std;

int x = 0, y = 1;
vector<int> input;

int main () {
	cin >> x >> y;
	
	while ( y != x ){
		input.push_back(x);
		input.push_back(y);
		cin >> x >> y;
	}
	
	for (int i = 1; i < input.size(); i+=2){
		if (input[i-1] > input[i]) cout << "Decrescente\n";
		else cout << "Crescente\n";
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
