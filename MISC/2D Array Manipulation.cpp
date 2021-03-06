#include <bits/stdc++.h>
/*
Problem: 2D Array Manipulation
Link   : 

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// 4 directions
//          (0 ,-1)         
// (-1, 0)           (1, 0)
//          (0 , 1)         

int dx[] = {0 , 1, 0, -1};
int dy[] = {-1, 0, 1,  0};

bool valid_indicies(int i, int j, N, int M){
    return ((0=<i) && (0=<j) && (i<N) && (j<N));
}

/*
   8 directions

   (-1,-1)   (0 ,-1)  (1,-1)
   (-1, 0)    (0,0)   (1, 0)
   (-1, 1)   (0 , 1)  (1, 1)
*/
int dx[] = {0 , 1, 0, -1, -1, -1, 1,  1};
int dy[] = {-1, 0, 1,  0, -1,  1, 1, -1};



template<typename T>
void Display2DMatrix(vector<vector<T>> matrix);

template<typename T>
void Rotate2DMatrixClockWise(vector<vector<T>> &matrix);

template<typename T>
void Rotate2DMatrixCounterClockWise(vector<vector<T>> &matrix);

template<typename T>
int CountSubMatrixOccurrences(vector<vector<T>> matrix, vector<vector<T>> subMatrix);

int main (){
    fastio;
    
    vector<vector<char>> matrix = { {'A', 'B', 'C'},
                                    {'D', 'E', 'F'},
                                    {'G', 'H', 'I'} };
    
    Display2DMatrix(matrix);
    
    Rotate2DMatrixClockWise(matrix);    
    cout << "After a 90 degree clockwise rotation: \n";
    Display2DMatrix(matrix);

    Rotate2DMatrixCounterClockWise(matrix);    // now its back to normal
    Rotate2DMatrixCounterClockWise(matrix);    
    cout << "After a 90 degree counter-clockwise rotation: \n";
    Display2DMatrix(matrix);
    
    return 0;
}

template<typename T>
void Rotate2DMatrixCounterClockWise(vector<vector<T>> &matrix){
    /* Rotates a 2d matrix 90 degrees in counter clockwise direction.
       O(1) space
      
       ABC        CFI
       DEF  ----> BEH
       GHI        ADG
    
    */
    size_t n = matrix.size();

    for (size_t x = 0; x < n / 2; x++){
        for (size_t y = x; y < n-x-1; y++){ 
            T temp = matrix[x][y];
  
            matrix[x][y]         = matrix[y][n-1-x];
            matrix[y][n-1-x]     = matrix[n-1-x][n-1-y];  
            matrix[n-1-x][n-1-y] = matrix[n-1-y][x];  
            matrix[n-1-y][x]     = temp;
        } 
    } 
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

template<typename T>
void Display2DMatrix(vector<vector<T>> matrix){
    for (size_t i = 0; i < matrix.size(); ++i){
        for (size_t j = 0; j < matrix[0].size(); ++j)
            cout << matrix[i][j];
        cout << endl;
    }
    cout << endl;
}

/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------
https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/

Explanation:
---------------

*/
