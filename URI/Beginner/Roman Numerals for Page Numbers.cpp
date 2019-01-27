#include <bits/stdc++.h>

using namespace std;

int x = 0, v = 0;
int A[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
int N[] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
string RomanNumrals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int main () {
	cin >> x;
	
	for (int i = 0; i < 13; i++){
		v = x/A[i];
		if ( !(1 > v) ){
			N[i] += v;
			x-= v * A[i];
		}
	}
	
	for (int i = 0; i < 13; i++){
		if ( N[i] > 0) {
			for (int j = 0; j < N[i]; j++){
				cout << RomanNumrals[i];}
		}
	}
	cout << '\n';

	return 0;
}
/* I stands for 1, V for 5, X for 10, L for 50, C for 100, D for 500 and M stands for 1000.
   1, 5, 10, 50, 100, 500, 1000
   I, V,  X,  L,   C,   D, M.

I = 1
IV = 4
V = 5
IX = 9
X = 10
XL = 40
L = 50
XC = 90
C = 100
CD = 400
D = 500
CM = 900
M = 1000

I've added a new test case to :https://www.udebug.com/URI/1960
Test case: 444
Expected output: CDXLIV



input:-
-----------
DCCCCLXXXXVIII = CMXCVIII
                 900 +90+ 5 +3 = 998

convert(DCCCCLXXXXVIII) ------>> CMXCVIII
    D 4C L 4X V 3I


output:-
-----------


Problem: 
*/



















