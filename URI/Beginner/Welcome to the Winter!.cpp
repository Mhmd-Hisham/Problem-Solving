#include <stdio.h>

int d1, d2, d3;
bool happy = 1;

int main () {
	scanf("%d %d %d", &d1, &d2, &d3);
	
	if (d1 < d2){
		if (d2 >= d3 || d3-d2 < d2-d1) happy = 0;
		
	}
	else if (d1 > d2){
		if (d2-d3 >= d1-d2) happy = 0;
	}
	else if (d2 >= d3) happy = 0;
	
	printf("%s\n", ((happy)? ":)" : ":(" ));
	return 0;
}
/*
input:-
-----------
:)
:(
:(
:)
:)
:(
:)
:(

:)
:(
:(
:)
:)
:(
:)
:(


:)
:(
:(
:)
:)
:(
:)
:(

output:-
-----------


Problem: 
*/
