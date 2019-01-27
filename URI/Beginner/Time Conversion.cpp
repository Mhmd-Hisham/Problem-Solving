#include <bits/stdc++.h>

using namespace std;


int main () {
	int T = 0;
	
	cin >> T;
	int sec = 0, min = 0, hours = 0;
	
	hours = T/60/60; T -= hours*60*60;
	min = T/60; T -= min * 60;
	
	printf("%d:%d:%d\n",hours,min,T);
	
	return 0;
}
/*
input:-
-----------


output:-
-----------






Problem: 
*/
