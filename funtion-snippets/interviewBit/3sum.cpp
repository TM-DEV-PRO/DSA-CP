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
long long int pairSum(vector<int> &A, int i, long long int target){
    
    long long int num = A[i];
    i++;
    int j = A.size()-1;
    long long int sum = num+A[i]+A[j];
    long long int min_dis = abs(sum-target);
    while(i<j){
        
            long long int curr_sum = num + A[i] + A[j];
            if(min_dis>(long long )abs(curr_sum-target)){
                min_dis = (long long )abs(curr_sum-target);
                sum = curr_sum;
                
            }
            
            if(curr_sum>target)j--;
            else if(curr_sum<target)i++;
            else break;
           
    }
    
    return sum;
}


 int threeSumClosest(vector<int> &A, int B) {
    if(A.size()<3) return -1;
    sort(A.begin(),A.end());
    //for(auto i:A)cout<<i<<" ";
    //cout<<endl;
    long long int min_sum = 10000000000000000;
   
    for(int i=0;i<A.size();i++){
        long long int temp = pairSum(A,i,B);
       
        //min_sum = min(min_sum,temp);
        if((long long )abs(B-temp)< (long long )abs(B-min_sum)){
            min_sum = temp;
        }
         //cout<<temp<<" "<<min_sum<<endl;
    }
    
    return min_sum;
     
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}