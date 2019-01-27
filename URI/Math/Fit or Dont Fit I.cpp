#include <bits/stdc++.h>

using namespace std;

int N;
string n1, n2;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	while ( N-- ){
		cin >> n1 >> n2;
		cout << ((n1.substr(max(0,int(n1.length()-n2.length())))== n2)? "encaixa\n" : "nao encaixa\n");
		
	}	

	return 0;
}
/*
input:-
-----------
4
5678690 78690
5434554 543
1243 1243
54 654

output:-
-----------


Problem: 
*/
