#include <bits/stdc++.h>
/*
Problem: A. Anton and Polyhedrons
Link   : https://codeforces.com/contest/785/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, total_faces = 0;
string polyhedron;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    cin >> N;

	while ( N-- ){
	    cin >> polyhedron;
	    
        if (polyhedron == "Tetrahedron")       total_faces += 4;
        else if (polyhedron == "Cube")         total_faces += 6;
        else if (polyhedron == "Octahedron")   total_faces += 8;
        else if (polyhedron == "Dodecahedron") total_faces += 12;
        else if (polyhedron == "Icosahedron")  total_faces += 20;
	}
	
	cout << total_faces << endl;
    
	return 0;
}
/*
Sample input:-
-----------------
4
Icosahedron
Cube
Tetrahedron
Dodecahedron

Sample output:-
-----------------
42

Resources:-
-------------

Explanation:
---------------

*/
