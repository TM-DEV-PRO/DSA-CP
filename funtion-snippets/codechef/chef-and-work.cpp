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

int minimumRounds(vector<int> &array, int size, int max_weight)
{
    stack<int> boxes;
    for (int i = size - 1; i >= 0; i--)
        boxes.push(array[i]);

    int min_rounds = 0;
    int curr_weight = max_weight;
    while (!boxes.empty())
    {
        if (boxes.top() <= curr_weight)
        {
            curr_weight -= boxes.top();
            boxes.pop();
            if (boxes.empty())
                min_rounds++;
        }
        else
        {
            if (boxes.top() > max_weight)
                return -1;
            else
            {
                curr_weight = max_weight;
                min_rounds++;
            }
        }
    }

    return min_rounds;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    std::cin >> test;
    while (test)
    {
        int no_of_boxes, max_allowed_weight;
        cin >> no_of_boxes >> max_allowed_weight;
        vector<int> boxes_weight(no_of_boxes);

        for (auto &i : boxes_weight)
            cin >> i;

        int minimum_rounds = minimumRounds(boxes_weight, no_of_boxes, max_allowed_weight);

        cout << minimum_rounds << "\n";

        test--;
    }

    return 0;
}