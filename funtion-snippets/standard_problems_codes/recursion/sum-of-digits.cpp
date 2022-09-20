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

int sumOfDigits(int num){
    if(num<10)return num;

    return num%10 + sumOfDigits(num/10);
}

// tailrecurssive
int sumOfDigitsTail(int num,int sum){
    if(num<10)return sum+num;
    sum+=num%10;
    return sumOfDigits(num/10,sum);
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}