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
bool isPossible(int number)
{

    float power;
    if (number == 1)
        return true;
    for (int i = 2; i <= floor(sqrt(number)); i++)
    {
        power = log2(number) / log2(i);
        if ((ceil(power) == floor(power)) && power > 1)
            return true;
    }

    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}