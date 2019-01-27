#include <bits/stdc++.h>
/*
Problem: A. Good Number
Link   : https://codeforces.com/contest/365/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, k, number, total = 0;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> k;
	
	while ( N-- ){
	    bool digits[10] {0};//universal zero-initializer (see resources below)[1]
	    bool good = true;
	    cin >> number;

        while(number){             // a loop to get all the digits of the number (see resources below)[2]
            digits[number%10] = 1; // frequency array (see resources below)[3]
            number /= 10;
        }
        
        int next = k+1;
        while ( next-- ){
            if (!digits[next]) good = false; // check if the digit is not present in the digits array
        }

	    total += (good)? 1 : 0;
	}
	
	cout << total << endl;
    
	return 0;
}
/*
Sample input:-
-----------------
10 6
1234560
1234560
1234560
1234560
1234560
1234560
1234560
1234560
1234560
1234560

Sample output:-
-----------------
10

Resources:-
-------------
[1]: https://stackoverflow.com/questions/1920430/c-array-initialization/1920481
[2]: https://codereview.stackexchange.com/questions/66823/output-digits-of-a-number
[3]: https://www.geeksforgeeks.org/find-frequency-number-array/

Video Solution - Eng Muntaser Abukadeja (Arabic):https://www.youtube.com/watch?v=W5SLLnni1KM&feature=youtu.be

Explanation:
---------------
You are given an array of size N, and an int K. (1 ≤ n ≤ 100, 0 ≤ k ≤ 9)
The problem is to check for every number in the array if it is a good number.
A good number is a number that its digits contains all the numbers between [0, k] (inclusive).

How to do it?
Check the Read the Resources and check the code.. I think you will be able to understand it yourself then.

*/
