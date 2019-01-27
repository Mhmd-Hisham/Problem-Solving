#include <bits/stdc++.h>
/*
Problem: A. Arpa’s hard exam and Mehrdad’s naive cheat
Link   : https://codeforces.com/contest/742/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;

int main () {
	scanf("%d\n", &N);

	//God Damn Mod cycles!
	if (N == 0) printf("1\n");
	else if (N%4 == 1)printf("8\n");
	else if (N%4 == 2)printf("4\n");
	else if (N%4 == 3)printf("2\n");
	else printf("6\n");

	return 0;
}
/*
Sample input:-
-----------------
2

Sample output:-
-----------------
4

Explanation:
---------------
    * To get the last digit of any number N.. we simply calculate N%10 (see resources below)
      So the naive solution to this problem would be to naivly calculate (1378^n)%10
      but we can't as N tends to be very large (0  ≤  n  ≤  10^9)

    * we can solve using modular multiplication rules:
        "A^2 mod C = (A * A) mod C = ((A mod C) * (A mod C)) mod C"
        
        so this means that (1378^n)%10 can be written as ( (1378%10)^n )%10 
        and-as you might have noticed- 1378%10 == 8 (last digit remember?)

        so now the solution would be (8^n)%10.. all we have to do is to calculate the 8 to the power of n now.
    
    *Can we do better?
        Actuall, if you try to calculate the power with a mod loop,
        the number will fit an integer type, but you will exceed the time limit
        
        we need to do it in O(1) time... Okay but how?
        
        Here comes the mod cycles, now your taks is to identify the cycle
        and precompute the answer.

Resources:-
-------------
https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/fast-modular-exponentiation

*/
