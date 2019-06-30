#include <bits/stdc++.h>
/*
Problem: C. Magic Formulas
Link   : https://codeforces.com/problemset/problem/424/c

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define PI acos(-1)
#define EPS 1e-10
#define endl '\n'

#define FOR(i,to) for(i=0;i<(to);++i)
#define FORR(i,arr) for(auto& i:arr)
#define ITER(it,cont) for(__typeof(cont.begin()) it=cont.begin();it!=cont.end();it++)
#define ALL(v) (v.begin()),(v.end())
#define ZERO(arr) memset(arr,0,sizeof(arr))
#define MINUS(arr) memset(arr,0xff,sizeof(arr))
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N;
int Q = 0, qi;

int f(int a);
int getXor(int a, int b);

int main () {
    fastio;
    
    cin >> N;
    
    int rem, cycles;
    int s, e;
    
    for (int i = 1; i <= N; ++i){
        cin >> qi;
        Q ^= qi;
        
        rem = N%i;
        cycles = N/i;
        
        if (rem){
            if (cycles&1) s = rem+1, e = i;
            else          s = 1, e = rem+1;
        }
        
        else {
            if (cycles&1) s = 1, e = i;
            else continue;
        }

        Q ^= getXor(s, e-1);
    }
    
    cout << Q << endl;
    return 0;
}

int f(int a){
     int res[] = {a, 1, a+1, 0};
     return res[a%4];
}

int getXor(int a, int b) {
     return f(b)^f(a-1);
}

/*
Sample input:-
-----------------
3
1 2 3

Sample output:-
-----------------
3

Resources:-
-------------
https://stackoverflow.com/questions/10670379/find-xor-of-all-numbers-in-a-given-range
http://manaschaudhari.com/blog/2016/08/12/xor-summation-trick/
https://discuss.codechef.com/t/how-to-find-xor-of-all-the-elements-in-given-range/12911/3

Explanation:
---------------
Ok, here we go..
for simplicity, let N = 10,
                    p = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

So that means, 
p1, p2, p3, ... pn = 0

and you already know that 5 ^ 0 = 5

So, no need to put pi into our calculations for now


q1  = (1%1) ^ (1%2) ^ (1%3) ^ (1%4) ^ (1%5) ^ (1%6) ^ (1%7) ^ (1%8) ^ (1%9) ^ (1%10)
q2  = (2%1) ^ (2%2) ^ (2%3) ^ (2%4) ^ (2%5) ^ (2%6) ^ (2%7) ^ (2%8) ^ (2%9) ^ (2%10)
q3  = (3%1) ^ (3%2) ^ (3%3) ^ (3%4) ^ (3%5) ^ (3%6) ^ (3%7) ^ (3%8) ^ (3%9) ^ (3%10)
q4  = (4%1) ^ (4%2) ^ (4%3) ^ (4%4) ^ (4%5) ^ (4%6) ^ (4%7) ^ (4%8) ^ (4%9) ^ (4%10)
q5  = (5%1) ^ (5%2) ^ (5%3) ^ (5%4) ^ (5%5) ^ (5%6) ^ (5%7) ^ (5%8) ^ (5%9) ^ (5%10)
q6  = (6%1) ^ (6%2) ^ (6%3) ^ (6%4) ^ (6%5) ^ (6%6) ^ (6%7) ^ (6%8) ^ (6%9) ^ (6%10)
q7  = (7%1) ^ (7%2) ^ (7%3) ^ (7%4) ^ (7%5) ^ (7%6) ^ (7%7) ^ (7%8) ^ (7%9) ^ (7%10)
q8  = (8%1) ^ (8%2) ^ (8%3) ^ (8%4) ^ (8%5) ^ (8%6) ^ (8%7) ^ (8%8) ^ (8%9) ^ (8%10)
q9  = (9%1) ^ (9%2) ^ (9%3) ^ (9%4) ^ (9%5) ^ (9%6) ^ (9%7) ^ (9%8) ^ (9%9) ^ (9%10)
q10 = (10%1) ^ (10%2) ^ (10%3) ^ (10%4) ^ (10%5) ^ (10%6) ^ (10%7) ^ (10%8) ^ (10%9) ^ (10%10)

which simplyfies to:

q1  =  0 ^ 1 ^ 1 ^ 1 ^ 1 ^ 1 ^ 1 ^ 1 ^ 1 ^ 1 
q2  =  0 ^ 0 ^ 2 ^ 2 ^ 2 ^ 2 ^ 2 ^ 2 ^ 2 ^ 2
q3  =  0 ^ 1 ^ 0 ^ 3 ^ 3 ^ 3 ^ 3 ^ 3 ^ 3 ^ 3
q4  =  0 ^ 0 ^ 1 ^ 0 ^ 4 ^ 4 ^ 4 ^ 4 ^ 4 ^ 4
q5  =  0 ^ 1 ^ 2 ^ 1 ^ 0 ^ 5 ^ 5 ^ 5 ^ 5 ^ 5
q6  =  0 ^ 0 ^ 0 ^ 2 ^ 1 ^ 0 ^ 6 ^ 6 ^ 6 ^ 6
q7  =  0 ^ 1 ^ 1 ^ 3 ^ 2 ^ 1 ^ 0 ^ 7 ^ 7 ^ 7
q8  =  0 ^ 0 ^ 2 ^ 0 ^ 3 ^ 2 ^ 1 ^ 0 ^ 8 ^ 8
q9  =  0 ^ 1 ^ 0 ^ 1 ^ 4 ^ 3 ^ 2 ^ 1 ^ 0 ^ 9
q10 =  0 ^ 0 ^ 1 ^ 2 ^ 0 ^ 4 ^ 3 ^ 2 ^ 1 ^ 0


Just take a look at each column in the matrix:

     1  2  3  4  5  6  7  8  9  10
    -----------------------------
1  | 0  1  1  1  1  1  1  1  1  1 | 
2  | 0  0  2  2  2  2  2  2  2  2 |
3  | 0  1  0  3  3  3  3  3  3  3 |
4  | 0  0  1  0  4  4  4  4  4  4 |
5  | 0  1  2  1  0  5  5  5  5  5 |
6  | 0  0  0  2  1  0  6  6  6  6 |
7  | 0  1  1  3  2  1  0  7  7  7 |
8  | 0  0  2  0  3  2  1  0  8  8 |
9  | 0  1  0  1  4  3  2  1  0  9 |
10 | 0  0  1  2  0  4  3  2  1  0 |
    ------------------------------

Don't forget that Q(the answer) = q1 ^ q2 ^ .. ^ qn
it will give you the same answer if you calculate it column by column

you see?
each column indeed contains mod cycles of it's number
now, the no. complete cycles will be N/column_i -> cycles
     the incomplete cycle            N%column_i -> reminder


now why do we need to calculate the no. cycles?

let x = 2 (0010)
x ^ 3 = (2) ^ (3) = (0010) ^ 
                    (0011)
                  = (0001)  = 1
now x = 1,
x ^ 3 = (0001) ^
        (0011)
      = (0010)  = 2

guess what? XOR reverses itself

so, if you XOR a number (X), even times with another number,
you will get the same number(X) you started with.

Now, Try to understand this Table:

              0-reminder        reminder
even-cycles      none             part
odd-cycles       whole           inverse

The last thing is to calculate XOR in a given range[s, e] in O(1) time,
for that, take a look a the resources.

*/
