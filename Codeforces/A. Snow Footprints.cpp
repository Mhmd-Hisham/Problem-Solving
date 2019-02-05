#include <bits/stdc++.h>
/*
Problem: A. Snow Footprints
Link   : https://codeforces.com/contest/298/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, s, t;
string footprints(1001, ' ');

int main () {

    scanf("%d\n%1000s", &N, &footprints[0]);

    int pos = 0;
    
    if      ( (pos = footprints.find("RLL")) != string::npos ) { s = pos+3, t = pos+2;}
    else if ( (pos = footprints.find("RRL")) != string::npos ) { s = pos+1, t = pos+2;}
    else if ( (pos = footprints.find("RL")) != string::npos )  { s = pos+1, t = pos+1;}
    else if ( (pos = footprints.find(".L")) != string::npos )  { s = pos+2, t = pos+1;}
    else { pos = footprints.find("R."); s = pos+1, t = pos+2;}

    printf("%d %d\n", s, t);

    return 0;
}
/*
Sample input:-
-----------------
9
..RRLL...

Sample output:-
-----------------
2 3

Resources:-
-------------
Video Solution (Arabic) [Eng Mostafa Saad]: https://www.youtube.com/watch?v=oX_hPHnYgMA

Explanation:
---------------

*/
