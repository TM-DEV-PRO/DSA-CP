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

int maxPieces(int N, int a, int b, int c)
{
    if (N == 0)
        return 0;
    if (N < 0)
        return -1;

    int pieces =  max(max(maxPieces(N - a, a, b, c),maxPieces(N - b, a, b, c)),maxPieces(N - c, a, b, c));
    
    if(pieces<0)return -1;
    else return pieces+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}