#include <bits/stdc++.h>

using namespace std;

int N = 0, t1 = 0, t2 = 0;
map<int,string> songs;

int main () {
	cin >> N;

	songs[0] = "PROXYCITY";
	songs[1] = "P.Y.N.G.";
	songs[2] = "DNSUEY!";
	songs[3] = "SERVERS";
	songs[4] = "HOST!";
	songs[5] = "CRIPTONIZE";
	songs[6] = "OFFLINE DAY";
	songs[7] = "SALT";
	songs[8] = "ANSWER!";
	songs[9] = "RAR?";
	songs[10] = "WIFI ANTENNAS";
	
	while ( N-- ){
		cin >> t1 >> t2;
		cout << songs.find(t1+t2)->second << '\n';
	}

	return 0;
}
/*
input:-
-----------


3
3 4
0 0
1 0

output:-
-----------


Problem: 
*/
