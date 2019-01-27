#include <bits/stdc++.h>

using namespace std;

int d = 0, m = 0, n = 0;
int months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

int main () {
	
	while ( cin >> m >> d && !cin.eof()){
		n = 0;
		if (m == 12 && d >= 24){
			cout << ((d > 25)? "Ja passou!" : (d==25)? "E natal!" : "E vespera de natal!")  << '\n';
		}
		else {
			for (int i = m-1; i < 12; i++){
				n+= months[i];
			}
		n-= d;
		printf("Faltam %d dias para o natal!\n", n);
		}
		
	}


	return 0;
}
/*
// 12 25
// 366

	366
    January - 31 days
    February - 28 days in a common year and 29 days in leap years
    March - 31 days
    April - 30 days
    May - 31 days
    June - 30 days
    July - 31 days
    August - 31 days
    September - 30 days
    October - 31 days
    November - 30 days
    December - 31 days
*/

/*
input:-
-----------
12 24
12 25
1 30
2 29
3 15
4 1
7 3
9 30
10 21
5 31
12 30
6 5

output:-
-----------


Problem: 
*/
