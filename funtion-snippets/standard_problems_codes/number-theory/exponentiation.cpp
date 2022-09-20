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

long long int moduloExponentiation(int base, int power, int modulo)
{
    long long int result = 1;
    while (power > 0)
    {
        if (power % 2 != 0)
        {
            result = (result * base) % modulo;
            power--;
        }

        else
        {
            base = (base * base) % modulo;
            power = power / 2;
        }
    }

    return result;
}

long long int binaryExponentiation(int base, int power)
{
    long int result = 1;
    while (power > 0)
    {
        if (power % 2 != 0)
        {
            result = result * base;
            power--;
        }

        else
        {
            base = base * base;
            power = power / 2;
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}