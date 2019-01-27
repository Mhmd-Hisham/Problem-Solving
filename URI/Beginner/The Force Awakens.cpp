/*
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <iostream>
*/
#include <stdio.h>

int N, M, j, i;

int main () {
	scanf("%d %d\n", &N, &M);
	
	int A[N][M];
	for (i = 0;i < N; i++){
		for (j = 0; j < M; j++){
			scanf("%d", &A[i][j]);
		}
	}
	N--;
	M--;
	for (i = 1; i < N; i++){
		for (j = 1; j < M; j++){
			if (A[i][j] == 42) {
			if (A[i-1][j] == 7){
			if (A[i+1][j] == 7){
			if (A[i][j-1] == 7){
			if (A[i][j+1] == 7){
			if (A[i+1][j+1] == 7){
			if (A[i+1][j-1] == 7){
			if (A[i-1][j-1] == 7){
			if (A[i-1][j+1] == 7){ N = 0; M = 0;}
			}
			}
			}
			}
			}
			}
			}
			}
		}
	}
	if (M) printf("0 0\n");
	else printf("%d %d\n", i, j);

	return 0;
}
/*
input:-
-----------

i-1, j
i+1, j

i, j+1
i, j-1

4 7
11 12 7 7 7 13 14
15 6 7 12 7 7 42
98 -5 7 7 7 42 7
-1 42 3 9 7 7 7

output:-
-----------


Problem: 
*/
