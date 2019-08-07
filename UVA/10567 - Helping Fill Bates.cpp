#include <bits/stdc++.h>
/*
Problem: 10567 - Helping Fill Bates
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1508

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int Q;
string s, ss;
unordered_map<char, vector<int>> freq;

int main () {
    fastio;
    
    cin >> s >> Q;

    int len = s.size();
    
    for (int i = 0; i < len; ++i)
        freq[s[i]].push_back(i);
    
    while (Q--){
        cin >> ss;
        
        int last = 0, start = -1, end = -1;
        bool matched = true;

        for (int i = 0; i < ss.size() && matched; ++i){
            int pos = lower_bound(freq[ss[i]].begin(), freq[ss[i]].end(), last) - freq[ss[i]].begin();

            if (pos == freq[ss[i]].size())
                matched = false;
           
            pos = freq[ss[i]][pos];
            
            if (i == 0) start = pos;
            if (i == ss.size()-1) end = pos;
            
            last = pos+1;
        }
            
        if (matched) cout << "Matched " << start << " " << end << '\n';
        else cout << "Not matched" << '\n';
    }
    
    return 0;
}
/*
Sample input:-
-----------------
aaaaaaaaaaaaaabbbbbbbbbdddddddddddccccccccccccc
3
aaaaaaaaaaaaaaaaaaa
aaaaaaaaaaabbbbbbbbbbbc
abccc

Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
