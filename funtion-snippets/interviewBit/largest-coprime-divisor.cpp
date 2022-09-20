#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
int gcd(int A, int B) {
    if(A<B) return gcd(B,A);
    
    if(B==0)return A;
    
    else return gcd(B,A%B);
}

int cpFact(int A, int B) {
    int gc = gcd(A,B);
    while(gc!=1){
        A=A/gc;
        gc = gcd(A,B);
    }
    return A;
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}