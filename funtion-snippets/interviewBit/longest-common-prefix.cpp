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
string longestCommonPrefix(vector<string> &A) {
    if(A.size()==0)return "";
    if(A.size()==1)return A[0];
    string res;
    for(int i=0,j=0;i<A[0].size()&&j<A[1].size();i++,j++){
        if(A[0][i]==A[1][j])res.push_back(A[0][i]);
        else break;
    }
   // cout<<res<<endl;
    
    for(int i=2;i<A.size();i++){
       string temp;
       int j=0,k=0;
       while(j<res.size()&&k<A[i].size()){
           
           if(res[j]==A[i][k]){
               temp.push_back(res[j]);
           }
        //   else {
        //       res=temp;
        //       break;
        //   }
           
           else break;
           j++;
           k++;
       }
       res=temp;
       //cout<<res<<" "<<temp<<" "<<A[i]<<endl;
       
    }
    //cout<<endl;
    return res;



        //  int size = A.size();
        // sort(A.begin(),A.end());
        // string res;
        
        // for(int i=0,j=0;i<A[0].size()&&j<A[size-1].size();i++,j++){
        //     if(A[0][i]==A[size-1][j])res.push_back(A[0][i]);
        //     else break;
        // }
        
        // return res;
    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}