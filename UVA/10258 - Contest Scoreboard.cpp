#include <bits/stdc++.h>
/*
Problem: 10258 - Contest Scoreboard
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1199

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int T;

struct contestant{
    // a struct for the scoreboard contestant data
    int id = 0;
    int total_solved = 0;
    int total_penalty = 0;

    int penalty[11] = {0};
    bool solved[11] = {0};
};

bool compare_contestants(contestant a, contestant b);

int main () {
    fastio;
    
    string line;

    cin >> T;

    getline(cin, line);
    getline(cin, line);
    while ( T-- ){
        
        bool partisipated[102] = {0};
        contestant scoreboard[102];
        while (getline(cin, line) && line!=""){
            
            char verdict;
            int id, problem, time;

            istringstream iss(line);
            iss >> id >> problem >> time >> verdict;
            
            contestant c;

            c.id = id;
            
            // check if the contestant has submitted before
            if (!partisipated[id]){
                
                scoreboard[id] = c;                
                partisipated[id] = true;
            }

            // if the problem is already solved, don't do anything
            if (scoreboard[id].solved[problem]) continue;
            
            // now check the verdict
            
            if (verdict == 'I')
                scoreboard[id].penalty[problem]+= 20;
            
            else if (verdict == 'C'){
                // mark as solved
                scoreboard[id].solved[problem] = true;
                scoreboard[id].total_solved++;
                
                // update total penalty
                scoreboard[id].penalty[problem] += time;
                scoreboard[id].total_penalty += scoreboard[id].penalty[problem];
            }
        }
        
        // now sort the scoreboard
        sort(scoreboard, scoreboard+101, compare_contestants);

        // now output the scoreboard
        for (int i = 0; i < 101; ++i){
            if (scoreboard[i].id){
                cout << scoreboard[i].id << " ";
                cout << scoreboard[i].total_solved << " ";
                cout << scoreboard[i].total_penalty << "\n";
            }
        }
        
        if (T) cout << "\n";
    }
    
    return 0;
}

bool compare_contestants(contestant a, contestant b){
    if (a.total_solved == b.total_solved){
        if (a.total_penalty == b.total_penalty){
            return a.id < b.id;
        } else return a.total_penalty < b.total_penalty;
    } else return a.total_solved > b.total_solved;

}

/*
Sample input:-
-----------------
1

1 2 10 I
3 1 11 C
1 2 19 R
1 2 21 C
1 1 25 C

Sample output:-
-----------------
1 2 66
3 1 11


Resources:-
-------------

Explanation:
---------------

*/
