#include <bits/stdc++.h>

using namespace std;

int c = 1, i, p, n, k;
string N1, N2;

int main () {
	
	while ( cin >> N1 >> N2 && !cin.eof()){
		p = 0, n = 0, k = 0, i = 0;

		k = N2.find(N1[0]);
		while (k != string::npos){
			i = N2.find(N1,k);
			if (i != string::npos){
				n++;
				k = i;
				p = k;
			}
			
			k = N2.find(N1[0],k+1);
		}
		printf("Caso #%d:\n", c);
		if (n > 0) printf("Qtd.Subsequencias: %d\nPos: %d\n", n, p+1);
		else printf("Nao existe subsequencia\n");
		printf("\n");
		c++;
	}

	return 0;
}
/*
input:-
-----------
12 
12 31321455 1232 14565423 1 12
-   -  -    -    -        - -




88

88888888888888

O(n)
88 888888888888
8 88 88888888888
88 88 8888888888
888 88 888888888
8888 88 88888888
88888 88 8888888
888888 88 888888
8888888 88 88888
88888888 88 8888
888888888 88 888
8888888888 88 88
88888888888 88 8
888888888888 88





78954 = 5

  1     2     3     4       5     6   = 7 seq-s
78954 78954 78954 78954 4 78954 78954 = 6*5
1     6     11    16      22    27
                              p=27

0 found
6 found
11 found
16 found
22 found
27 found



find(X, i), i = 0
find(X, 1st i to meet X[0])




output:-
-----------


Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/2126
*/
