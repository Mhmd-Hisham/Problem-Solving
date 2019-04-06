#include <bits/stdc++.h>
//#include <stdio.h>
/*
Problem: 10281 - Average Speed
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1222

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int main () {
    
    int hh, mm, ss;
    char line[2000];
    double ltime = 0, ctime = 0, speed = 0, distance = 0;
    
    while ( cin.getline(line, sizeof line) ){
        sscanf(line, "%d:%d:%d", &hh, &mm, &ss);
        ctime = (hh + mm/60.0 + ss/3600.0);
        
        if (line[8] != '\0'){
            distance += speed * (ctime-ltime);
            sscanf(line+8, "%lf", &speed);
        }

        else {
            distance += speed * (ctime-ltime);
            printf("%02d:%02d:%02d %0.2lf km\n", hh, mm, ss, distance);
        }
        
        ltime = ctime;
    }

    return 0;
}
/*
Sample input:-
-----------------
00:00:01 100
00:15:01
00:30:01
01:00:01 50
03:00:01
03:00:05 140

Sample output:-
-----------------
00:15:01 25.00 km
00:30:01 50.00 km
03:00:01 200.00 km

Resources:-
-------------

Explanation:
---------------

*/
