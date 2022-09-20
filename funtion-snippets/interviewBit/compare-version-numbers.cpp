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
int compareVersionBetter(string A, string B) {
   unsigned long long ver_1=0,ver_2=0;
   for(int i=0,j=0;i<A.length()||j<B.length();i++,j++){
       while(i<A.length() && A[i]!='.'){
           ver_1 += ver_1*10 + (A[i]-'0');
           i++;
       }
       
       while(j<B.length() && B[j]!='.'){
           ver_2 += ver_2*10 + (B[j]-'0');
           j++;
       }
       
       if(ver_1>ver_2)return 1;
       if(ver_2>ver_1)return -1;
       ver_1=0,ver_2=0;
       
   }
   
   return 0;
    
}

int compareVersion(string A, string B) {
     string str1="", str2="";
    // int i =0,j=0,dotA=0,dotB=0;
    // while(i<A.length() && j<B.length()){
    //     if()
    // }
    
    vector<string> resA,resB;
    for(auto ch:A){
        if(ch=='.'){
            resA.push_back(str1);
            str1="";
        }
        
        else str1.push_back(ch);
        
        
    }
     resA.push_back(str1);
    for(auto ch:B){
        if(ch=='.'){
            resB.push_back(str2);
            str2="";
        }
        
        else str2.push_back(ch);
    }
    resB.push_back(str2);
   // cout<<resA[0].length()<<" "<<resB[0].length()<<endl;
    int i=0,j=0;
    while(i<resA.size() && j<resB.size()){
        //long long int numA = stoll(resA[i]);
       // long long int numB = stoll(resB[j]);
        
        int sa=-1,sb=-1,ea=resA[i].length()-1,eb=resB[j].length()-1;
        
        
        do{
            sa++;
        }while(resA[i][sa]=='0');
        
        do{
            sb++;
        }while(resB[j][sb]=='0');
        
        
        
        if((ea-sa+1)>(eb-sb+1))return 1;
        else if((ea-sa+1)<(eb-sb+1))return -1;
        else{
            while(sa<=ea){
                if((resA[i][sa]-'0')>(resB[j][sb]-'0'))return 1;
                else if((resA[i][sa]-'0')<(resB[j][sb]-'0'))return -1;
                else {
                    sa++;
                    sb++;
                }
            }
        }
        i++;
        j++;
    }
    
    while(i<resA.size()){
        int sa=-1,ea=resA[i].length()-1;
         do{
            sa++;
        }while(resA[i][sa]=='0');
        if(sa<=ea)return 1;
       i++;
    }
    while(j<resB.size()){
        int sb=-1,eb=resB[j].length()-1;
         do{
            sb++;
        }while(resB[j][sb]=='0');
        if(sb<=eb)return -1;
        j++;
    } 
     return 0;
        
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}