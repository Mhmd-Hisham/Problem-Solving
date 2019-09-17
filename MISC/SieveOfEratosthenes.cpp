#include <bits/stdc++.h>
/*
Problem: print all prime numbers less than N
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

int N;

void SieveOfEratosthenes(int N){
    // Complexity: O(N log log N)
    // prints all prime numbers less than N
    bool isPrime[N+1];
    memset(isPrime, 1, sizeof(isPrime));
    
    for (int i = 2; i*i <= N; ++i){
        if (isPrime[i]){
            for (int j = i+i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
    
    for (int i = 2; i <= N; ++i){
        if (isPrime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main () {
    fastio;
    
    SieveOfEratosthenes(2000);
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
