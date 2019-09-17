#include <bits/stdc++.h>
/*
Problem: Lower bound, Upper bound, Binary Search implmentation
Link   : 

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N;

typedef long long ll;
typedef unsigned long long ull;

#define EPS 1e-10

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int check(int v){
    return arr[v-1];
}

template<typename T>
T BinarySearch(T start, T end, T value, T default_value=-1){
    // Time Complexity: O(log N)

    T mid;
    while (start < end){
        mid = (start+end+1)>>1;
                
        T v = check(mid);
        if (v == value) return mid;
        else if (v > value) end = mid-1; 
        else start = mid;
    }
    
    return default_value;
}

int main () {
    int N;

    cout << "Array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}\n";

    while ( true ){
        cout << "Enter a value to search for: ";

        cin >> N;
        
        int ans = BinarySearch(0, 11, N);
        
        if (ans == -1) cout << "No such value!\n";
        else cout << "Value does exist, index = " << ans-1 << '\n';
    
    }
    
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
