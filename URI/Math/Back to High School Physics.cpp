#include <iostream>

short v, t;

int main () {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	
	while (	std::cin >> v >> t && !std::cin.eof() ){
		std::cout << (2*v*t) << '\n';
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
