#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int T, a, b, r, k, Index;
char valid_answers[51], answer;
std::string player;
std::vector<std::string> losers;

inline char get_operation() {
	if (a+b == r) return '+';
	else if (a-b == r) return '-';
	else if (a*b == r) return '*';
	return 'I';
}

int main () {
	while (	scanf("%d", &T) != EOF ){
		for (int i = 0;i < T; i++){
			scanf("%d %d=%d", &a, &b, &r);
			valid_answers[i] = get_operation();
		}
		
		for (int i = 0;i < T; i++){
			std::cin >> player >> Index >> answer;
			if (answer != valid_answers[Index-1]) {losers.push_back(player);}
		}
		
		std::sort(losers.begin(), losers.end());
		k = losers.size();
		if (k){
			if (k == T) printf("None Shall Pass!\n");
			else {
				k--;
				for (int i = 0; i < k; i++)
					std::cout << losers[i] << " ";
				std::cout << losers[k] << '\n';
			}
			
		}
		else printf("You Shall All Pass!\n");
		losers.clear();
	}
	

	return 0;
}
/*
The input consists of an integer T (2 ≤ T ≤ 50) that indicates the number of expression and the number of players. Each test case consists of T expressions like "X Y=Z", indicating that X operation Y (0 ≤ X, Y ≤ 103) is equal to Z (-103 ≤ Z ≤ 106), followed by T players and his respective answers like "N E R", with N being the player's name (up to 50 characters and no blank spaces), E being the index of the chosen expression (1 ≤ E ≤ T) and R the answer (+, -, * or I, indicating Impossible). Read input until EOF.

For each test case, if every player can proceed, print "You Shall All Pass!"; if no player can proceed, print "None Shall Pass!"; otherwise, print, in lexicographical order and between blank spaces, the name of the players who gave the wrong answer and won't proceed to the next phase.


input:-
-----------
3
8 4=5
2 5=5
1 3=4
Samuel 2 +
Abner 3 +
Aline 1 *

output:-
-----------
Aline Samuel


input:-
-----------
2
1 2=-1
0 7=7
Luiz 2 -
Absolut 1 +

output:-
-----------
None Shall Pass!



output:-
-----------


Problem: 
*/
