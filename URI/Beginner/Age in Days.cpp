#include <bits/stdc++.h>

using namespace std;

int main () {
	int age = 0;
	
	cin >> age;
	int y = 0, m = 0, d = 0;
	
	y = (age/365); age -= (y *365);
	m = (age/30); age -= (m * 30);
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, age);
	
	return 0;
}

/*
input:-
-----------


output:-
-----------





Problem: 
*/
