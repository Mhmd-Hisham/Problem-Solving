#include <bits/stdc++.h>
/*
Problem: 408 - Uniform Generator
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=349

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int STEP, MOD;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while ( cin >> STEP >> MOD && !cin.eof() ){
        bool good = true;
        int last = 0, next = 0;
        bool seed[MOD] {0}; // universal zero-initializer.. see resources below
        
        for (int i = 0; i < MOD; i++){
            next = (last+STEP)%MOD;
            
            if (seed[next]) {good = false; break;} // if we have seen the number before.. then It's a bad choice

            seed[next] = 1;                        // we have seen it now.. so index it true :)
            last = next;
        }
        
        if (MOD == 0) good = false;                // if MOD == 0; the loop won't run.. 
                                                   // and thus it will be a good chocie.. but that's wrong.. so I hard coded it.
        
    	cout << right << setw(10) << STEP;
    	cout << right << setw(10) << MOD;
    
    	if (good) cout << setw(17)  << "Good Choice\n\n";
        else      cout << setw(16) << "Bad Choice\n\n";
    
	}

	return 0;
}

/*
input:-
-----------
3 5
15 20
63923 99999

output:-
-----------
         3         5    Good Choice

        15        20    Bad Choice

     63923     99999    Good Choice

Resources:-
-------------
std::setw   : http://www.cplusplus.com/reference/iomanip/setw/
std::rigth  : http://www.cplusplus.com/reference/ios/right/
universal zero-initializer :https://stackoverflow.com/questions/1920430/c-array-initialization/1920481
Video Solution [Eng Yahia Ashraf] (Arabic): https://www.youtube.com/watch?v=VmL4PQIZ-6c
*/
