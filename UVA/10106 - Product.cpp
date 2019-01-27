#include <bits/stdc++.h>
/*
Problem: 10106 - Product
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1047

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string X, Y;
int MAX_SIZE = 600;

string product(string X, string Y){
    int product_array[MAX_SIZE];
    string product = "";
    
    memset(product_array, 0, sizeof(product_array)); //initialize the array with 0's
    
    reverse(X.begin(), X.end());                     // reverse the strings; 
    reverse(Y.begin(), Y.end());                     // so we can work with the smallest digits first
    
    for (int i = 0; i < X.length(); i++){
        for (int j = 0; j < Y.length(); j++){
            product_array[i + j] += (X[i]-'0') * (Y[j]-'0');
        }
    }
    
    // Now move the carries
    for (int i = 0; i < MAX_SIZE; i++){
        product_array[i+1] += product_array[i]/10;
        product_array[i] %= 10;
    }
    
    // Detect the number of digits for the resulting number
    int end = MAX_SIZE-1;
    while (product_array[end] == 0){
        end--;
    }

    // Now get the number into one string variable
    for (int i = end; i >= 0; i--){
        product += (product_array[i]+'0');
    }
    
    // if the number is empty.. it means it is 0
    product = (product == "")? "0" : product;
    
    return product;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    while ( cin >> X >> Y && !cin.eof() ){
        cout << product(X, Y) << '\n';
	}
	return 0;
}
/*
input:-
-----------
12
12
2
222222222222222222222222

output:-
-----------
144
444444444444444444444444

Resources:-
-------------
Video (Arabic): https://www.youtube.com/watch?v=KNd6eqRpWqE
*/
