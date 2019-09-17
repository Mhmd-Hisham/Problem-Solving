#include <bits/stdc++.h>
/*
Problem: linear random shuffle
Link   : 

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

float get_random(){
    static std::default_random_engine e;
    static std::uniform_real_distribution<> dis(0, 1); // rage 0 - 1
    return dis(e);
}

void knuth_shuffle(int * arr, int N){
    // Knuth shuffle / Fisher-Yates shuffle
    // Time complexity: O(n)
    // Space complexity: O(1)
    srand (time(NULL));
    
    float uniform = get_random();
    
    for (int i = 0; i < N; i++){
        int j = floor((n-i-1)*uniform);
        swap(arr[i], arr[j]);
    }

}

int main () {

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
