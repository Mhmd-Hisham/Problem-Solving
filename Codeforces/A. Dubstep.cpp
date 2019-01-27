#include <bits/stdc++.h>
/*
Problem: A. Dubstep
Link   : https://codeforces.com/contest/208/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string song;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> song;

    size_t pos = 0;
    while((pos = song.find("WUB", pos)) != string::npos) {
        if (pos != 0) song.replace(pos, 3, " ");
        else song.erase(0, 3);
    }
    
    cout << song << '\n';

	return 0;
}
/*
input:-
-----------
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB

output:-
-----------
WE ARE THE CHAMPIONS MY FRIEND 

Resources:-
-------------
http://www.cplusplus.com/reference/string/string/replace/
http://www.cplusplus.com/reference/string/string/erase/
https://stackoverflow.com/questions/4643512/replace-substring-with-another-substring-c
https://stackoverflow.com/questions/3418231/replace-part-of-a-string-with-another-string/3418285
*/
