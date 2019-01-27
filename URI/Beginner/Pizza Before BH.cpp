/*
#include <algorithm>
#include <bits/stdc++.h>
*/
#include <stdio.h>
#include <bitset>

bool v;
int N, D, best_date;
char dates[51][20];
std::bitset<50> s = 0;

int main () {
	while (	scanf("%d %d", &N, &D) != EOF && N && D ){
		best_date = N;
		for (int i = 0;i < D; i++){
			scanf("%s", &dates[i][0]);
			s = 0;
			for (int j = 0; j < N; j++){
				scanf("%i", &v);
				s[j] = v;
			}
			
			best_date = std::min(best_date,((s.count() == N)? i : best_date));
		}
		if (best_date == N) printf("Pizza antes de FdI\n");
		else printf("%s\n", dates[best_date]);
		s = 0;
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
