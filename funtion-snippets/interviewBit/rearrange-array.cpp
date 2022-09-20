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
void Solution::arrange(vector<int> &A) {
//     if(A.size()==1 || A.size()==0)return;    
//   long long int x = floor(log10(A.size()-1)+1);
   
//   x = pow(10,x);
   //cout<<x<<endl;
   int n= A.size();
   for(auto &i: A){
       
       i+=(A[i]%n)*n;
       //cout<<n1<<" "<<n2<<" "<<i<<endl;
   }
  
   for(auto &i:A){
       i=i/n;
       //cout<<i<<" ";
   }
    
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}