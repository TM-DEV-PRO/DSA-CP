#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;


    int compareVersion(string A, string B) {
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
    vector<unsigned long long> v1;
    vector<unsigned long long> v2;
    string s = "";
    for(int i=0;i<A.length();i++){
        if(A[i]=='.'){
            v1.push_back(stoull(s));
            s="";
        }
        else
            s.push_back(A[i]);
    }
    v1.push_back(stoull(s));
    s="";
    for(int i=0;i<B.length();i++){
        if(B[i]=='.'){
            v2.push_back(stoull(s));
            s="";
        }
        else
            s.push_back(B[i]);
    }
    v2.push_back(stoull(s));
    s="";
    
    for(int i=0;i<v1.size()&&i<v2.size();i++){
        if(v1[i]>v2[i])
         return 1;
        else if(v1[i]<v2[i])
         return -1;
    }
    if(v1.size()>v2.size())
        return 1;
    else if(v1.size()<v2.size())
        return -1;
    return 0;
    
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}