#include <bits/stdc++.h>
/*
Problem: 541 - Error Correction
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=482

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;
bool matrix[100][100];
int bit_i = 0, bit_j = 0;
int odd_col_count, odd_row_count, counter;

int main () {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while ( cin >> N && N != 0 ){
        odd_row_count = 0;
        odd_col_count = 0;
        bit_i = 0;
        bit_j = 0;

		// taking input..
		for (int i = 0; i < N; i++){
		    counter = 0;
		    for (int j = 0; j < N; j++){
		        cin >> matrix[i][j];
		        counter += matrix[i][j];
		    }
		    if (counter%2 != 0) {odd_row_count++; bit_i = i+1;}
		}

		// processing..
		for (int i = 0; i < N; i++){
		    counter = 0;
		    for (int j = 0; j < N; j++){
		        counter += matrix[j][i];
		    }
		    if (counter%2 != 0) {odd_col_count++; bit_j = i+1;}
		}
        
		if (odd_col_count>1 || odd_row_count>1) printf("Corrupt\n");
        else if (odd_col_count == 0 && odd_row_count == 0) printf("OK\n");
		else printf("Change bit (%d,%d)\n", bit_i, bit_j);
    }
    
	return 0;
}
/*
input:-
-----------
4
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 0 1 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 1 1 0
1 1 1 1
0 1 0 1
0

output:-
-----------
OK
Change bit (2,3)
Corrupt

Resources:-
-------------

*/
