#include <bits/stdc++.h>

using namespace std;

int main () {
	string A = "", B = "", C = "", animal = "";
	
	cin >> A >> B >> C;


	if (A == "vertebrado"){
		if (B == "ave"){
			if (C == "carnivoro") animal = "aguia";
			else animal = "pomba";
		}
		else{
			if (C == "onivoro") animal = "homem";
			else animal = "vaca";
		}
	}
	else {
		if (B == "anelideo"){
			if (C == "onivoro") animal = "minhoca";
			else animal = "sanguessuga";
		}
		else {
			if (C == "herbivoro") animal = "lagarta";
			else animal = "pulga";
		}
	}
	
	cout << animal << '\n';
	return 0;
}


/*
input:-
-----------


output:-
-----------




Problem: 
*/
