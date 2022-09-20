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
bool isPalindrome(string str){
    for(int i=0,j=str.size()-1;i<j;i++,j--){
        if(str[i]!=str[j])return false;
    }
    
    return true;
}
int solve(string A) {
    
    
    int max_palin = -1000000000000;
    
    string temp="";
    for(auto ch:A){
        temp.push_back(ch);
        //cout<<temp<<" "<<temp.length()<<endl;
        if(isPalindrome(temp)){
           // if(max_palin<temp.size()){
                max_palin = temp.size();
                 
            //}
           
        }
    }
   // cout<<max_palin<<endl;
    return A.length()-max_palin;
}


int solveLPS(string A) {
    string temp = A;
    temp = temp + "?";
    
    reverse(A.begin(),A.end());
    
    temp= temp + A;
    //cout<<temp<<" "<<temp.length()<<endl;
    int lps[temp.length()] = {0};
    
    int i =1,len=0;
    while(i<temp.length()){
        
        
        if(temp[len]==temp[i]){
            len++;
            lps[i]=len;
           
            i++;
        }
        
        else if(len==0){
            lps[i]=0;
           
            i++;
        }
        
        else len = lps[len-1];
        
        
    }
   
    return A.length()-lps[temp.length()-1];
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}