#include <bits/stdc++.h>

using namespace std;

int T, n, c;
string name;
map<string,int> food;

int main () {
	food["suco de laranja"] = 120;
	food["morango fresco"] = 85;
	food["mamao"] = 85;
	food["goiaba vermelha"] = 70;
	food["manga"] = 56;
	food["laranja"] = 50;
	food["brocolis"] = 34;

	while ( cin >> T && T != 0){
		n = 0;
		for (int i = 0; i < T; i++){
			scanf("%d ", &c);
			getline(cin,name,'\n');
			n += c*(food.find(name)->second);
		}
		if (n > 130) printf("Menos %d mg\n", n-130);
		else if (n < 110) printf("Mais %d mg\n", 110-n);
		else printf("%d mg\n", n);
		
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
