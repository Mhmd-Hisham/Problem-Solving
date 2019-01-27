#include <stdio.h>

int N;

int main () {
	scanf("%d", &N);
	printf("%X\n", N);
		
	return 0;
}

/*
string TOHEX(int n){
	int v = 0;
	string r;
	
	while ( n > 0 ){
		v = n%16;
		n /= 16;
		
		if (v < 10)
			r += char(v+48);
		
		else if ( v == 10 ) r += "A";
		else if ( v == 11 ) r += "B";
		else if ( v == 12 ) r += "C";
		else if ( v == 13 ) r += "D";
		else if ( v == 14 ) r += "E";
		else if ( v == 15 ) r += "F";
	}
	
	return r;
}


input:-
-----------


output:-
-----------


Problem: 
*/
