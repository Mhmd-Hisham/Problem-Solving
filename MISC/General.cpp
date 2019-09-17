#include <bits/stdc++.h>
/*
Problem: 
Link   : 

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool isPalindrome(string word){
    int len = word.size();
    int half = len/2;

    for (int i = 0; i < half; ++i){
        if (word[i] != word[len-i-1])
            return false;
    }

    return true;    
}

bool isPrime(int n){
    if (n == 2) return true;
    if (n < 2 || n%2 == 0) return false;
    
    for (int i = 3; i * i <= n; i +=2){
        if (n%i == 0)
            return false;
    }
    
    return true;
}


int main (){
    fastio;
    
    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
