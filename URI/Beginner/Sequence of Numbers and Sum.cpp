#include <bits/stdc++.h>

using namespace std;

int s = 0, b = 0;
int x = 0, y = 1;
vector<int> input;

int main () {
	cin >> x >> y;
	
	while ((y > 0) and (x > 0)){
		input.push_back(x);
		input.push_back(y);
		cin >> x >> y;
	}
	
	for (int i = 1; i < input.size(); i+=2){
		s = 0;
		b = max(input[i],input[i-1]);
		for (int j = min(input[i],input[i-1]); j <= b; j++){
			cout << j << ' ';
			s+= j;
		}
		cout << "Sum=" << s << '\n';
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
