#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 int myAtoi(string s) {
        int i=-1;
        int f = 1;
        do{
            i++;
           
        }while(i<s.length() && s[i]==' ');
        if(i<s.length() && (s[i]=='-'|| s[i]=='+')){
            if(s[i]=='-')
                f=-1;
            i++;
        }    
        if(i<s.length() && (s[i]<'0' || s[i]>'9'))
            return 0;
        string str = "";
        
        while(i<s.length()){
            if(s[i]<'0' || s[i]>'9')
                break;
            str.push_back(s[i]);
            i++;
        }
        
        
        long long num = 0;
        for(auto i:str){
            if(num-1>INT_MAX)
                break;
            num = num*10 + (i-'0');
        }
      
        num*=f;
        
        if(num>=INT_MAX)
            return INT_MAX;
        if(num<=INT_MIN)
            return INT_MIN;
       
        return (int)num;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}