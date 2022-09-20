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

int noOfRepeatingElements(vector<int> &array)
{
    unordered_map<int,int> check;
    int count = 0;
    for (auto i : array)
    {
        if (check.find(i) != check.end() && check[i]==1){
            check[i]++;
            count++;
        }
        else
            check[i]++;
    }

    check.clear();

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no_of_elements;
    cin >> no_of_elements;
    vector<int> array(no_of_elements);

    for (int i = 0; i < no_of_elements; i++)
    {
        cin >> array[i];
    }

    cout << noOfRepeatingElements(array);

    return 0;
}