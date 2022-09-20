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

bool isPrime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    
    return true;
}

vector<int> primesum(int A) {
    vector<int> res;
    for(int i=2;i<A;i++){
        if(isPrime(i)&&isPrime(A-i)){
            res.push_back(i);
            res.push_back(A-i);
            break;
        }
    }
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}