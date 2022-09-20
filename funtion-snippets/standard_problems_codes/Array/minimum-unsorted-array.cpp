#include <bits/stdc++.h>
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
vector<int> minimumUnsortedarray(vector<int> &array){
    int size_array=array.size();
    int start=0,end=0,max_so_far,min_so_far;
    int flag =1;
    for (int i = 0; i < size_array; i++)
    {
        if(flag){
            if(i<size_array-1 && array[i]>array[i+1]){
                start = i;
                flag = 0;
                max_so_far=array[i];
                min_so_far=array[i+1];
                i++;
                end=i;
                continue;
            }

            else continue;
        }

        if(array[i]>=max_so_far){
            max_so_far=array[i];
            continue;
        }
        else {
            if(array[i]<min_so_far)min_so_far=array[i];
            end=i;
        }
    }

    for (int i = 0; i < start; i++)
    {
        if(array[i]>min_so_far)start=i;
    }
    

    vector <int> res;
    if(start==end)res.push_back(-1);
    else{
        res.push_back(start);
        res.push_back(end);

    }

    return  res;
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

return 0;
}