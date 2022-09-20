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
string solveLPS(string A) {
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
   
   int size = lps[temp.length()-1];
    string res="";
    for(int i=0;i<size;i++){
        res.push_back(temp[i]);
    }
    
    return res;
}

string longestPalindrome(string A) {
    string res="";
    int size = A.size();
    for(int i=0;i<size;i++){
        string temp = solveLPS(A);
        if(temp.length()>res.length())res=temp;
        A.erase(A.begin()+0);
    }
    
    return res;
}

string longestPalindromeMiddle(string A) {
    
    pair<int,int> long_palin(0,0);
    
    for(int i =0 ;i<A.length();i++){
        
        // odd palindrome
        
        int j=i,k=i;
        
        do{
            j--;
            k++;
        }while(j>=0 && k<A.length() && A[j]==A[k]);
        j++;
        k--;
        
        if((k-j+1)>(long_palin.second - long_palin.first+1)){
            long_palin = make_pair(j,k);
        }
        
        // even palindrome
        
        j=i+1, k=i;
        do{
            j--;
            k++;
        }while(j>=0 && k<A.length() && A[j]==A[k]);
        j++;
        k--;
        if((k-j+1)>(long_palin.second - long_palin.first+1)){
            long_palin = make_pair(j,k);
        }
        
    }
    string res="";
    
    for(int i=long_palin.first;i<=long_palin.second;i++)
        res.push_back(A[i]);
    
    return res;

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}