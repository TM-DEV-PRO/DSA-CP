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
        int n;
        cin>>n;
        string str;
        cin>>str;

        int n0=0,n1=0;

        for(auto i:str)
        {
            if(i=='0')
                n0++;
            else
                n1++;
        }

        if(str[0]=='0' || str[n-1]=='0' || n0%2!=0 || n1%2!=0)
            cout<<"NO"<<endl;
        else{
            string a = "", b="";
            int f = 1;
            int count = 0;

            for(auto i:str){
                if(i=='0'){
                    if(f==1){
                        a.push_back('(');
                        b.push_back(')');
                        f=0;
                    }

                    else{
                        a.push_back(')');
                        b.push_back('(');
                        f=1;
                    }
                }

                else{
                    if(count<n1/2){
                        a.push_back('(');
                        b.push_back('(');
                        count++;
                    }

                    else{
                        a.push_back(')');
                        b.push_back(')');
                    }
                }
            }

            cout<<"YES"<<"\n"<<a<<"\n"<<b<<endl;
        }

    test--;
    }
return 0;
}