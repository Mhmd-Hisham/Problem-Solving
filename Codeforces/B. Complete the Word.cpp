#include <bits/stdc++.h>
/*
Problem: B. Complete the Word
Link   : https://codeforces.com/problemset/problem/716/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string word, nice = "-1";
int freq[256], p1 = 0, p2 = 0;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> word;
    
    int substr_size = 0;
    while ( (p2 <= word.length()) ){
        if (substr_size < 26){
            if (freq[word[p2]] == 0 || word[p2] == '?') {
                substr_size++;
                freq[word[p2]]++;
                p2++;
                continue;
            }
            
            freq[word[p1]]--;
            substr_size--;
            p1++;
            continue;
        }

        char missing = 'A';
        nice = word;
        for (int i = p1; i < p2; i++){
            if (word[i] != '?') continue;

            while (freq[missing]) missing++;
            nice[i] = missing;
            freq[missing]++;
        }

        for (int i = 0; i < nice.length(); i++)
            if (nice[i] == '?') nice[i] = 'A';// just to fill the rest of the string

        break;
    }

    cout << nice << '\n';
    
    return 0;
}
/*
Sample input:-
-----------------
??????????????????????????

Sample output:-
-----------------
MNBVCXZLKJHGFDSAQPWOEIRUYT

Resources:-
-------------

Explanation:
---------------

*/
