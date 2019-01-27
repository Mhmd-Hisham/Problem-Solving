#include <bits/stdc++.h>

using namespace std;

int main () {
	int DDD = 0;
	string dst = "";
	cin >> DDD;
	map<int,string> road;
	
	road[61] = "Brasilia";
	road[71] = "Salvador";
	road[11] = "Sao Paulo";
	road[21] = "Rio de Janeiro";
	road[32] = "Juiz de Fora";
	road[19] = "Campinas";
	road[27] = "Vitoria";
	road[31] = "Belo Horizonte";
	
	if (road.find(DDD) == road.end()) cout << "DDD nao cadastrado\n";
	else cout << road.find(DDD)->second << '\n';
	
	return 0;
}
/*
input:-
-----------


output:-
-----------






Problem: 
*/
