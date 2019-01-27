#include <bits/stdc++.h>
/*
Problem: 11462 - Age Sort
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, age, age_freq[2000002];
set<int> ages;
set<int> ::iterator it;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while ( cin >> N && N ){
        int left = N; // numbers left to print

        for (int i = 0; i < N; i++){
            cin >> age;
            age_freq[age]++;
            ages.insert(age);
        }
        
        it = ages.begin();
        while (it != ages.end()){
            while (age_freq[*it]){
                cout << *it;
                cout << ( (left == 1)? "" : " ");
                age_freq[*it]--;
                left--;
            }
            it++;
        }
        
        cout << '\n';
        ages.clear();
    }

    return 0;
}
/*
Sample input:-
-----------------
5
3 4 2 1 5
5
2 3 2 3 1
0

Sample output:-
-----------------
1 2 3 4 5
1 2 2 3 3

Resources:-
-------------

Explanation:
---------------

*/
