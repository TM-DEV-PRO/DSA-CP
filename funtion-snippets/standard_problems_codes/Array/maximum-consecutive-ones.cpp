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

// int maxConsecutiveOnes(vector<int> &array, int size)
// {
//     int res = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] == 1)
//         {
//             int count = 0;
//             while (array[i] == 1 && i < size)
//             {
//                 count++;
//                 i++;
//             }

//             if (count > res)
//                 res = count;
//         }
//     }

//     return res;
// }


int maxConsecutiveOnes(vector<int> &array)
{
    int res = 0,temp=0;
   for( auto i: array){
       if(i==1)temp++;
       else temp=0;
       if(temp>res)res=temp;
   }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}