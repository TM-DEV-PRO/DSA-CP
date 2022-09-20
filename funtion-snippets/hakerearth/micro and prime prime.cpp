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

void seiveArrayConstruction(vector<bool> &seiveArray, long long int maxNumber, vector<long long int> &prime_prime_numbers)
{
    for (long long int i = 2; i <= maxNumber; i++)
        seiveArray[i] = true;
    seiveArray[0] = false, seiveArray[1] = false;

    for (long long int i = 2; i * i <= maxNumber; i++)
    {
        if (seiveArray[i] == true)
        {
            for (int j = i * i; j <= maxNumber; j += i)
                seiveArray[j] = false;
        }
    }

    long int count = 0;

    for (long long int i = 0; i <= maxNumber; i++)
    {
        if (seiveArray[i])
            count++;
        if (seiveArray[count])
            prime_prime_numbers[i] = 1;
    }

    for (long long i = 1; i <= maxNumber; i++)
    {
        prime_prime_numbers[i] += prime_prime_numbers[i - 1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int maxNumber = 1000001;
    vector<bool> seiveArray(maxNumber + 1);
    vector<long long int> prime_prime_numbers(maxNumber + 1); // prime_numbers b/w 1 and maxNumber

    seiveArrayConstruction(seiveArray, maxNumber, prime_prime_numbers);

    int test;
    std::cin >> test;
    while (test)
    {
        long long int L, R;
        cin >> L >> R;
        long long int pp_numbers = prime_prime_numbers[R] - prime_prime_numbers[L - 1];
        cout<<pp_numbers<<"\n";

        test--;
    }
    return 0;
}