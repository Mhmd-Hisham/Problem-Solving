#include <bits/stdc++.h>

using namespace std;

int N = 0, T = 0;
int x = 0, y = 0;
vector<int> out;

int main () {
	cin >> T;

	while ( T-- ){
		cin >> x >> y;
	
		int b = max(x,y);
		int s = min(x,y);
	
		x = s;
		y = b;

		x = (x%2 == 0)? x+1 : x+2;
		y = (y%2 == 0)? y-1 : y-2;
	
		for (int i = x; i <= y; i+=2)
			N+= i;
		
		out.push_back(N);
		N = 0;
	}
	
	for (int i = 0; i < out.size(); i++)
		cout << out[i] << '\n';
	
	return 0;
}

/*
input:-
-----------
7
4 5
13 10
6 4
3 3
3 5
3 4
3 8


output:-
-----------



Problem: 
*/

