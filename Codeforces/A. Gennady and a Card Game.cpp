#include <bits/stdc++.h>
/*
Problem: A. Gennady and a Card Game
Link   : https://codeforces.com/contest/1097/problem/0

solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/


using namespace std;

string on_the_table = "";
string in_hand = "";

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> on_the_table;
    
    for (int i = 0; i < 5; i++){
        cin >> in_hand;
        if (in_hand[0] == on_the_table[0] || in_hand[1] == on_the_table[1]){
            cout << "YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";

    return 0;
}
/*
Sample input:-
-----------------
AS
2H 4C TH JH AD

Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
