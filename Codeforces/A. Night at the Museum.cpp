#include <bits/stdc++.h>
/*
Problem: A. Night at the Museum
Link   : https://codeforces.com/contest/731/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string exhibit;
int rotations = 0, pointer, idx, dist;

int main () {
	cin >> exhibit;

    pointer = 0;// we start at a
	for (int i = 0; i < exhibit.size(); i++){
        idx = exhibit[i]-97; //index from a
        dist = abs(pointer-idx);// calculate the distance from the pointer to our index
    
        rotations += min(dist, 26-dist);

        pointer = idx; //move the pointer to where we left off
	}

	cout << rotations << '\n';
	return 0;
}
/*
input:-
-----------
zeus

output:-
-----------
18

Resources:-
-------------

*/
