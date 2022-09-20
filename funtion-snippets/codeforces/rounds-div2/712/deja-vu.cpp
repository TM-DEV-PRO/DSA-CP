#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        string str;
        cin>>str;
        
        
        int pos = -1;    
        for(int i=0;i<str.length();i++){
            if(str[i]!='a'){
                pos= str.length() - i;
                break;
            }
        }
        if(pos==-1)
            cout<<"NO"<<endl;
        else{
            string ans = "";
            for(int i=0;i<str.length();i++){

                if(i==pos){
                    ans.push_back('a');
                    i--;
                    pos=-1;
                }
                else
                    ans.push_back(str[i]);

            }
            if(pos!=-1)
                ans.push_back('a');
            cout<<"YES"<<"\n"<<ans<<endl;
        }
    test--;
    }
return 0;
}