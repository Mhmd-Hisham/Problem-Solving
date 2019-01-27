/*
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <iostream>
*/
#include <stdio.h>
int n, m;
unsigned long long int N, M;

int main () {
	while (	scanf("%d %d", &n, &m) != EOF ){
		N = 1; M = 1;

		for (int i = 0; i < n; i++)
			N *= n-i;

		for (int i = 0; i < m; i++)
			M *= m-i;
		printf("%lld\n", M+N);
	}

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
