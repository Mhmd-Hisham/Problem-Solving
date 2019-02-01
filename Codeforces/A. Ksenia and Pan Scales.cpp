#include <bits/stdc++.h>
/*
Problem: A. Ksenia and scale Scales
Link   : https://codeforces.com/contest/382/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string scale, weights;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> scale >> weights;
    
    int left = scale.find('|'), len = weights.size();
    int right = scale.length()-left-1;
    int diff = abs(right-left);

    if ( diff > len || (len-diff)%2 != 0){
        cout << "Impossible\n";
        return 0;
    }
    
    int k = (len-diff)/2 + max(left,right) - left;    
    cout << weights.substr(0, k) + scale + weights.substr(k, len) << '\n';

    return 0;
}
/*
Sample input:-
-----------------
AC|T
L


Sample output:-
-----------------
AC|TL


Resources:-
-------------
Video Solution (Arabic) [Eng Samed Hajajla]: https://www.youtube.com/watch?v=6xkV-GeRs2o&feature=youtu.be


Explanation:
---------------

*/
