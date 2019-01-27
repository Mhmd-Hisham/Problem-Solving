#include <bits/stdc++.h>
/*
Problem: A. Alyona and Numbers
Link   : https://codeforces.com/contest/682/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, M;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	
	int y[5] = {0};
	for (int i = 1; i <= M; i++){
	    y[i%5]++;
	}

	long long counter = 0;
	for (int x = 1; x <= N; x++){
        counter+= y[(5-x%5)%5];
	}
	
	cout << counter << '\n';

	return 0;
}
/*
Sample input:-
-----------------
6 12

Sample output:-
-----------------
14

Resources:-
-------------
https://www.quora.com/What-are-all-the-properties-of-modulo-which-can-be-used-in-programming-competitions
https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/modular-multiplication

Video Solution - [Eng John Gamal] (Arabic): https://www.youtube.com/watch?v=05ZIXw2G4Pw&feature=youtu.be

Explanation:
---------------
Here we use an important property of mod

(A+B) Mod C = ((A mod C) + (B mod C)) mod C

for example: let A = 12, B = 8, C = 5(always C = 5)

(A+B) % C = (12+8)%5 = 20%5 = 0
((A%5) + (B%5))%5 = ((12%5) + (8%5)) % 5
                  = (   2   +   3  ) % 5
                  =     5 % 5
                  =     0 (same result!)

Ok, how will we use this?
As you may know, N%5 will result in values between 0 and 4 (0 and C-1) for any N

As Stated in the problem statment, you want to count how many [(x+y)%5 == 0]
for every x in N
for every y in M

A naive solution would be to brute-force the answer and check every possible pair of y's and x's
in the range, that would be O(n^2) 

but if you look at the constrains, you will realise that you can't solve it in such complexity, as (1 ≤ n, m ≤ 1000000).

So How to do it?
Using the mod property mentined above, we can do much better than O(n^2)

lets take an example, let N = 5, M = 7 (output be should 7 pairs)

X ∈ {1, 2, 3, 4, 5}
Y ∈ {1, 2, 3, 4, 5, 6, 7}

the pairs that satisfy the condition [(x+y)%5 == 0] would be:
{(1,4), (2,3), (3,2), (4,1), (5,5), (4,6), (3, 7)}

lets apply the property on each pair

(1+4)%5 = (1%5 + 4%5)%5 = (1 + 4)%5 = 5%5 = 0
(2,3)%5 = (2%5 + 3%5)%5 = (2 + 3)%5 = 5%5 = 0
...
...
(4+6)%5 = (4%5 + 6%5)%5 = (4 + 1)%5 = 5%5 = 0  <<--------------
(3+7)%5 = (3%5 + 7%5)%5 = (3 + 2)%5 = 5%5 = 0  <<--------------

Did you get it?

if x%5 == 1, then y%5 should equal 4 so the pair satisfies the condition
and also if x%5 == 2, then y%5 = 3,
         if x%5 == 3, then y%5 = 2,
         if x%5 == 4, then y%5 = 1.

so the idea is to precompute for every y, y%5, and store it in an array at first
then for every x, we calculate (5 - x%5) and check how many y's have that (5 - x%5) in the array.
*/
