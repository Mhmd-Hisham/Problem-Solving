#include <bits/stdc++.h>
/*
Problem: B. Hungry Sequence
Link   : https://codeforces.com/problemset/problem/327/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, arr[100001];

void sieve_fill(int arr[], int n);

int main () {
    fastio;

    cin >> N;

    sieve_fill(arr, 1300001);
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    
    cout << endl;
    
    return 0;
}

void sieve_fill(int arr[], int n){
    bool isPrime[n+1];
    memset(isPrime, 1, sizeof(isPrime));

    for (int i = 2; i*i <= n; ++i){
        if (isPrime[i]){
            for (int j = i*2; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    
    int idx = 0, i = 2;
    while (idx < N){
        if (isPrime[i++])
            arr[idx++] = i-1;
    }
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
