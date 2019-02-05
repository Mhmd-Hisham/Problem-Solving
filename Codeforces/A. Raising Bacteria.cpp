#include <bits/stdc++.h>
/*
Problem: A. Raising Bacteria
Link   : https://codeforces.com/problemset/problem/579/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;

int main () {
    scanf("%d\n", &N);

    printf("%d\n", __builtin_popcount(N));
    return 0;
}
/*
Sample input:-
-----------------
5

Sample output:-
-----------------
2

Resources:-
-------------
https://www.quora.com/What-is-__builtin_popcount-in-c++
Video Solution (Arabic) [Eng Ahmed Rafaat] (Python): https://www.youtube.com/watch?v=UWMDrh1shXg

Explanation:
---------------
You just need to count the number of ones in the binary representation of the number.
why?
say you start with 1 bacteria in the first day.
Day 1: 1 (2^0)
Day 2: 2 (2^1)
Day 3: 4 (2^2)
Day 4: 8 (2^3)
Day n: 2^(n-1)
and so on...

5 :   00000101   ---> 2
8 :   00001000   ---> 1
9 :   00001001   ---> 2
10:   00001010   ---> 2

205 : 11001101   ---> 5

Take 10 for example:
    Day, put?, no. bacteria
     1 ,  1   ,   1
     2 ,  0   ,   2
     3 ,  1   ,   4 + 1
     4 ,  0   ,   8 + 2

    put? [1010] --->> 10

Take 205 for example:
    Day, put?, no. bacteria
     1 ,  1   ,   1
     2 ,  1   ,   2   + 1
     3 ,  0   ,   4   + 2
     4 ,  0   ,   8   + 4
     5 ,  1   ,   16  + 8  + 1
     6 ,  1   ,   32  + 16 + 2 + 1
     7 ,  0   ,   64  + 32 + 4 + 2
     8 ,  1   ,   128 + 64 + 8 + 4 + 1    = 205

    put? [0b11001101] --->> 205
    
    205 = 2^7 + 2^6 + 2^3 + 2^2 + 2^0

GOT IT?
*/
