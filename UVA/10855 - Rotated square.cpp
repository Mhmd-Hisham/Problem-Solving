#include <bits/stdc++.h>
/*
Problem: 10855 - Rotated square
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1796

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, n;

//char matrix[500][500], subMatrix[500][500];
vector<vector<char>> matrix, subMatrix;

void Rotate2DMatrixClockWise();

template<typename T>
int CountSubMatrixOccurrences(vector<vector<T>> matrix, vector<vector<T>> subMatrix);

template<typename T>
void Rotate2DMatrixClockWise(vector<vector<T>> &matrix);

int main () {
    fastio;
        
    while ( cin >> N >> n && (N|n) ){                
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        
        matrix = vector<vector<char>> (N, vector<char>(N));
        subMatrix = vector<vector<char>> (n, vector<char>(n));
                        
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                cin >> matrix[i][j];
        
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> subMatrix[i][j];
        

        c1 = CountSubMatrixOccurrences(matrix, subMatrix);
        Rotate2DMatrixClockWise(subMatrix);
        
        c2 = CountSubMatrixOccurrences(matrix, subMatrix);
        Rotate2DMatrixClockWise(subMatrix);
        
        c3 = CountSubMatrixOccurrences(matrix, subMatrix);
        Rotate2DMatrixClockWise(subMatrix);
        
        c4 = CountSubMatrixOccurrences(matrix, subMatrix);
        
        cout << c1 << " " << c2 << " " << c3 << " " << c4 << "\n";
    }
    
    return 0;
}

template<typename T>
void Rotate2DMatrixClockWise(vector<vector<T>> &matrix){
    /* Rotates a 2d matrix 90 degrees in clockwise direction.
       O(1) space
      
       ABC        GDA
       DEF  ----> HEB
       GHI        IFC
    
    */
    
    size_t n = matrix.size();
    
    for (size_t x = 0; x < n / 2; x++){
        for (size_t y = x; y < n-x-1; y++){ 
            T tmp = matrix[x][y];
            
            matrix[x][y]         = matrix[n-y-1][x];
            matrix[n-y-1][x]     = matrix[n-x-1][n-y-1];
            matrix[n-x-1][n-y-1] = matrix[y][n-x-1];
            matrix[y][n-x-1]     = tmp;
        }
    }
}

template<typename T>
int CountSubMatrixOccurrences(vector<vector<T>> matrix, vector<vector<T>> subMatrix){
    // Time Complexity: O(K^2 . M^2)
    int ans = 0;
    size_t N = matrix.size();
    size_t M = subMatrix.size();
    size_t K = N-M+1;


    for (size_t x = 0; x < K; ++x){
        for (size_t y = 0; y < K; ++y){

            bool found = true;
            for (size_t i = 0; i < M; ++i){
                for (size_t j = 0; j < M; ++j){
                    if (matrix[i+x][j+y] != subMatrix[i][j])
                        found = false;
                }
            }

            if (found) ans++;
        }
    }

    return ans;
}

/*
Sample input:-
-----------------
4 2
ABBA
ABBB
BAAA
BABB
AB
BB
6 2
ABCDCD
BCDCBD
BACDDC
DCBDCA
DCBABD
ABCDBA
BC
CD
0 0

Sample output:-
-----------------
0 1 0 0
1 0 1 0

Resources:-
-------------

Explanation:
---------------

*/
