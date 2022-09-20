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
vector<string> fizzBuzz(int A)
{
    vector<string> res;
    for (int i = 1; i <= A; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            res.push_back("FizzBuzz");

        else if (i % 3 == 0)
            res.push_back("Fizz");

        else if (i % 5 == 0)
            res.push_back("Buzz");
        else
        {
            string str = to_string(i);
            res.push_back(str);
        }
    }

    return res;

    //     vector<string> ans(A);

    // for(int i=1; i<=A; i++){
    //     ans[i-1] = i%15==0? "FizzBuzz" : i%5==0? "Buzz" : i%3==0? "Fizz" : to_string(i);
    // }
    // return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}