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

int GetXorRange(int x){
    /*
        Time Complexity: O(1)
        f(x) -> 0 ^ 1 ^ 2 ^ 3 ^ .. ^ x
    
     Source:
        https://stackoverflow.com/questions/10670379/find-xor-of-all-numbers-in-a-given-range
        http://manaschaudhari.com/blog/2016/08/12/xor-summation-trick/
        https://discuss.codechef.com/t/how-to-find-xor-of-all-the-elements-in-given-range/12911/3
    */
    
    if (x%4 == 0) return x;
    if (x%4 == 1) return 1;
    if (x%4 == 2) return x+1;
    if (x%4 == 3) return 0;
}

int GetXorRange(int a, int b) {
    /*
        Time Complexity: O(1)
        f(a, b) -> a ^ a+1 ^ a+2 ^ a+3 ^ .. ^ b

     Source:
        https://stackoverflow.com/questions/10670379/find-xor-of-all-numbers-in-a-given-range
        http://manaschaudhari.com/blog/2016/08/12/xor-summation-trick/
        https://discuss.codechef.com/t/how-to-find-xor-of-all-the-elements-in-given-range/12911/3
    */
     return getXorRange(b)^getXorRange(a-1);
}

int GetXorRangeNaive(int a, int b){
    // Time Complexity: O(b-a) 'O(N)'
    int ans = 0;
    
    for (int i = a; i <= b; ++i) ans ^= i;
    return ans;
}

void TestGetXorRange(){
    int x, y, b = 100000;

    for (int i = 1; i < b; ++i){
        x = GetXorRange(i, b);
        y = GetXorRangeNaive(i, b);

        cout << x << " " << y << endl;
        if (x!=y) {
            cout << "Wrong!" << endl;
            break;
        }
    }    
}

int main () {
    TestGetXorRange();
    
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
