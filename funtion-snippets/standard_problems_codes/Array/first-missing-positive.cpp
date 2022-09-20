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

 int firstMissingPositive(vector<int>& array) {
   
        for(auto &i: array){
            if(i<0)i=0;
        }
        
        for(auto i:array){
         if(abs(i)!=0 && abs(i)<=array.size()){
             if(array[abs(i)-1]>0)array[abs(i)-1]=0-array[abs(i)-1];
             else if(array[abs(i)-1]==0)array[abs(i)-1]=0-abs(i);
         }   
        }
     
        int i=0;
        for(;i<array.size();i++){
            if(array[i]>=0)return i+1;
        }
        
        
        return i+1;
        
        
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


return 0;
}