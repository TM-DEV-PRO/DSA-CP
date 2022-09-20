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
#include <iterator>
using namespace std;

void seiveArrayConstruction(vector<bool> &array, long long int maxNumber)
{
    for (long long int i = 2; i <= maxNumber; i++)
        array[i] = true;
    array[0] = false, array[1] = false;

    for (long long int i = 2; i * i <= maxNumber; i++)
    {
        if (array[i] == true)
        {
            for (int j = i * i; j <= maxNumber; j+=i)
                array[j] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int maxNumber = 100005;
    vector<bool> seiveArray(maxNumber + 1);
    vector<long long int> prime_numbers; // prime_numbers b/w 1 and maxNumber
   
    seiveArrayConstruction(seiveArray, maxNumber);
    for (long long int i = 2; i <= maxNumber; i++)
    {
        if (seiveArray[i])
            prime_numbers.push_back(i);
    }

    int test;
    std::cin >> test;
    while (test)
    {

        test--;
    }
    return 0;
}