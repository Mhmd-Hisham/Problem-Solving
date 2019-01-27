#include <bits/stdc++.h>
/*
Problem: A. Helpful Maths
Link   : https://codeforces.com/contest/339/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string s;
int numbers[101], idx = 0;

int main () {
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        if (s[i] != '+') {
            numbers[idx] = s[i]-'0'; // type casting
            idx++;
        }
    }
    
    sort(numbers, numbers+idx);
    
    for (int i = 0; i < idx-1; i++){
        cout << numbers[i] << '+';
    }
    
    cout << numbers[idx-1] << '\n';
    
	return 0;
}
/*
input:-
-----------
3+2+1

output:-
-----------
1+2+3

Resources:-
-------------
https://www.tutorialspoint.com/cplusplus/cpp_casting_operators.htm
https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
*/
