#include <bits/stdc++.h>
/*
Problem: C. Postcard
Link   : https://codeforces.com/contest/1099/problem/C

solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int k, len, n;
string message;
int snow = 0, candy = 0;

string clean(string m);
string remove_char(string m, char ch);
string remove_as_needed(string m, int to_remove);

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> message >> k;
    len = message.size();

    for (size_t i = 0; i < len; i++){
        if (message[i] == '*') snow++;
        else if (message[i] == '?') candy++;
    }

    n = len-snow-candy;
    
    if (n == k) {cout << clean(message) << '\n';}
    else if (n > k){
        if (n-candy-snow > k) cout << "Impossible\n";
        else cout << clean(remove_as_needed(message, n-k)) << '\n';
    }
    else {
        if (snow == 0) cout << "Impossible\n";
        else {
            message = remove_char(message, '?');
            size_t pos = message.find('*')-1;
            message.insert(pos, k-n, message[pos]);
            cout << clean(message) << '\n';
        }
    }

    return 0;
}

string remove_char(string m, char ch){
    size_t pos = 0;
    while ( (pos = m.find(ch, pos)) != string::npos ){
        m.erase(pos, 1);
    }

    return m;
}

string clean(string m){
    m = remove_char(m, '?');
    m = remove_char(m, '*');

    return m;
}

string remove_as_needed(string m, int to_remove){
    for (size_t i = 0; i < m.size() && to_remove; i++){
        if (m[i] == '*' || m[i] == '?') {
            m.erase(i-1,1);
            to_remove--;
            i--;
        }
    }

    return m;
}

/*
Sample input:-
-----------------
hw?ap*yn?eww*ye*ar
12

Sample output:-
-----------------
happynewyear

Resources:-
-------------

Explanation:
---------------

*/
