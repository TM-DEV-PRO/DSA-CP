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

// O(sqrt(n)) Time-complexity
void primeFactoriztion(int number, vector<int> &prime_factors)
{
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            int power = 0;
            // almost O(1) loop
            while (number % i == 0)
            {
                power++;
                number /= i;
            }
            prime_factors[i] = power;
        }
    }

    if (number > 1)
        prime_factors[number] = 1;
}
void seiveArrayConstruction(vector<int> &array, int maxNumber)
{
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i <= maxNumber; i++)
    {
        if (array[i] == -1)
        {
            for (int j = i; j <= maxNumber; j += i)
                if (array[j] == -1)
                    array[j] = i;
        }
    }
}

// O(log N) Time-complexity
void seivePrimeFactorization(int number, vector<int> &prime_factors, vector<int> &seiveArray)
{
    while (number > 1)
    {
        prime_factors[seiveArray[number]]++;
        number /= seiveArray[number];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int number, maxNumber;
    cin >> number;
    vector<int> prime_factors(number + 1), seiveArray(maxNumber + 1, -1);
   // seiveArrayConstruction(seiveArray, maxNumber);

    // primeFactoriztion(number, prime_factors);

    seivePrimeFactorization(number, prime_factors, seiveArray);
    return 0;
}