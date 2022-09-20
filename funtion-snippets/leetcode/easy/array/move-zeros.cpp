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
void moveZeroes(vector<int> &nums)
{

     for(int i=0,j=0;i<nums.size();i++){
           if(nums[i]!=0){
               swap(nums[j++],nums[i]);
           }
        }

    // int flag = 0;
    // for (int i = 0, j = 0; i < nums.size() && j < nums.size(); i++, j++)
    // {
    //     if (flag == 0)
    //     {
    //         if (nums[i] != 0)
    //             continue;
    //         else
    //         {
    //             flag = 1;
    //             i--;
    //             continue;
    //         }
    //     }

    //     else
    //     {
    //         if (nums[j] != 0)
    //         {
    //             swap(nums[i], nums[j]);
    //         }
    //         else
    //             i--;
    //     }
    // }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}