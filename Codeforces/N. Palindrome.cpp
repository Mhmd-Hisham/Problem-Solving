#include <bits/stdc++.h>
/*
Problem: N. Palindrome
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string S;

bool isPalindrome(string word);

int main () {
    fastio;
    
    cin >> S;
    
    cout << (isPalindrome(S)? "YES" : "NO") << endl;

    return 0;
}


bool isPalindrome(string word){
    int len = word.size();
    int half = len/2;

    for (int i = 0; i < half; ++i){
        if (word[i] != word[len-i-1])
            return false;
    }

    return true;    
}

/*
Sample input:-
-----------------
acmassiut

Sample output:-
-----------------
NO

Resources:-
-------------

Explanation:
---------------

*/
