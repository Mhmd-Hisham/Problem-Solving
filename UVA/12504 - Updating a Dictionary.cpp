#include <bits/stdc++.h>
/*
Problem: 12504 - Updating a Dictionary
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3948

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

#define endl '\n'

using namespace std;

int T = 0;

void input_dict(map<string, string> & dict);
void out_set(set<string> & keys, char ch);

int main () {
	scanf("%d\n", &T);

	while ( T-- ){
        map<string, string> ::iterator it;
        map<string, string> ::iterator old_it;

        map<string, string> old_dict, new_dict;
        set<string> updated_keys, new_keys, removed_keys;
        
	    input_dict(old_dict);
	    input_dict(new_dict);
	    
        it = new_dict.begin();
        while (it != new_dict.end()){
            it++;
        }

        //check for new, updated keys first	    
	    it = new_dict.begin();
	    while (it != new_dict.end()){
	        old_it = old_dict.find(it->first);
	        
	        if (old_it == old_dict.end()){
	            new_keys.insert(it->first);
	        }

	        else if (old_it->first == it->first){
	            if (old_it->second != it->second)
    	            updated_keys.insert(it->first);
	        }

	        it++;
	    }
	    
	    //check for removed now
	    it = old_dict.begin();
	    while ( it != old_dict.end() ){
	        if (new_dict.find(it->first) == new_dict.end()) removed_keys.insert(it->first);
	        it++;
	    }
	    
        if ( (new_keys.size() == 0 && updated_keys.size() == 0 && removed_keys.size() == 0) )
            cout << "No changes" << endl;
        
        else {
    	    // now print +new, -removed, *updated, respectively

            out_set(new_keys, '+');
            out_set(removed_keys, '-');
            out_set(updated_keys, '*');
        }

        cout << endl;
	}
	
	return 0;
}

void out_set(set<string> & keys, char ch){
    set<string> ::iterator it;

    if (keys.size() != 0){
        cout << ch;

        for (it=keys.begin(); it != keys.end(); ++it){
            cout << *it;
            it++; if (it != keys.end()) cout << ","; it--;

        }cout << endl;
    }
}

void input_dict(map<string, string> & dict){
    // Take a dictionary reference and update it's keys & values from stdin
    // Returns the keys as std::set<string>

    string key = "", value = "", line = "";
    getline(cin, line);
    if (line == "{}") return;

    int idx = 0;
    while (line[idx] != '}'){
        idx++;
            
        key = "", value = "";
        while (line[idx] != ':'){
            key += line[idx];
            idx++;
        }

        idx++;
        while (line[idx] != ',' && line[idx] != '}'){
            value += line[idx];
            idx++;
        }
        
        dict[key] = value;
    }
}

/*
Sample input:-
-----------------
3
{a:3,b:4,c:10,f:6}
{a:3,c:5,d:10,ee:4}
{x:1,xyz:123456789123456789123456789}
{xyz:123456789123456789123456789,x:1}
{first:1,second:2,third:3}
{third:3,second:2}

Sample output:-
-----------------
+d,ee
-b,f
*c

No changes

-first

Resources:-
-------------
https://stackoverflow.com/questions/26281979/c-loop-through-map
https://stackoverflow.com/questions/10038985/remove-a-key-from-a-c-map
https://stackoverflow.com/questions/110157/how-to-retrieve-all-keys-or-values-from-a-stdmap-and-put-them-into-a-vector
https://stackoverflow.com/questions/7763397/c-pass-a-map-by-reference-into-function
http://www.cplusplus.com/reference/map/map/find/
*/
