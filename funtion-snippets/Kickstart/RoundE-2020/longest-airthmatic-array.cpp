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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int test;
    std::cin>>test;
    int t=1;
    while(t<=test)
    {
    int n;
    cin>>n;

    vector <int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int curr_diff=nums[1]-nums[0];
    int start=0,end=1;
    int max_len=2;

    for (int i = 2; i < n; i++)
    {
        if(nums[i]-nums[i-1]==curr_diff){
            if(i-start+1>max_len){
                end=i;
                max_len=end-start+1;
        
            }
        }

        else{
            start=i-1;
            end=i;
            curr_diff=nums[i]-nums[i-1];
        }
    }



    cout<<"Case #"<<t<<": "<<max_len<<endl; 


    t++;
    }
    return 0;
}