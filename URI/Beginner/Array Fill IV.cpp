#include <bits/stdc++.h>

using namespace std;

int t = 0;
int par[5] = {0,0,0,0,0}, e = 0;
int impar[5] = {0,0,0,0,0}, o = 0;

int main () {
	
	for (int i = 0; i < 15; i++){
		cin >> t;
		if (abs(t)%2 == 0) {par[e] = t; e++;}
		else {impar[o] = t; o++;}
		
		if (o == 5){
			for (int j = 0; j < 5; j++)
				printf("impar[%d] = %d\n", j, impar[j]);
			
			o = 0;
		}
		else if ( e == 5 ){
			for (int j = 0; j < 5; j++)
				printf("par[%d] = %d\n", j, par[j]);
			
			e = 0;
		}
	}
	for (int i = 0; i < o; i++) printf("impar[%d] = %d\n", i, impar[i]);
	for (int i = 0; i < e; i++) printf("par[%d] = %d\n", i, par[i]);

	return 0;
}
/*
input:-
-----------
1
3
4
-4
2
3
8
2
5
-7
54
76
789
23
98

output:-
-----------

Problem: 
*/
