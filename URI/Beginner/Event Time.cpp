#include <bits/stdc++.h>

using namespace std;

int main () {
	int sday = 0, eday = 0;
	int sday_h = 0, sday_m = 0, sday_s = 0;
	int eday_h = 0, eday_m = 0, eday_s = 0;
	int days = 0, hours = 0, min = 0, sec = 0;

	string devnull = "";

	cin >> devnull >> sday;
	cin >> sday_h >> devnull >> sday_m >> devnull >> sday_s;
	cin >> devnull >> eday;
	cin >> eday_h >> devnull >> eday_m >> devnull >> eday_s;

	sec = eday - sday;
	sec *= 24 * 60 * 60;
	sec -= (sday_s + (sday_m*60) + (sday_h*3600));
	sec += eday_s + (eday_m*60) + (eday_h*3600);
	
	days = sec/86400;
	sec -= (days*86400);
	hours = sec/3600;
	sec -= hours*3600;
	min = sec/60;
	sec -= min*60;

		
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",days,hours,min,sec);
	return 0;
}
/*
input:-
-----------

338460
output:-
-----------






Problem: 
*/
