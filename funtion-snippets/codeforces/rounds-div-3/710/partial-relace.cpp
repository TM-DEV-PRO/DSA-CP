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
            int n,k;
            cin>>n>>k;

            string str;
            cin>>str;
            
            int inf=-1,inl=-1;
            for(int i=0,j=str.length()-1;i<=j;i++,j--){
                if(inf==-1 && str[i]=='*')
                    inf = i+1;
                if(inl==-1 && str[j]=='*')
                    inl = j+1;
                if(inf!=-1 && inl!=-1)
                    break;
            }

            if(inf==inl)
                cout<<1<<endl;
            else if(inl-inf<=k)
                 cout<<2<<endl;
            else{

                int x = (inl-inf)/k;
                if((inl-inf)%k!=0)
                    x++;
                cout<<x+1<<endl;
            } 
    test--;
    }
return 0;
}