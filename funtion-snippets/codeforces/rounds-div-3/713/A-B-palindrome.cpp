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
       
        long long int a,b;
        cin>>a>>b;
        string str;
        cin>>str;
        long long int n0=0,n1=0;
        for(auto i:str){
            if(i=='0')
                n0++;
            else if(i=='1')
                n1++;
        }

        
        if((a%2!=0 && b%2!=0) || n0>a || n1>b)
            cout<<-1<<endl;
        else if(a+b==1){
            if(a==1)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
        else if(n0+n1==a+b) {
            int flag=1;
            for(long long int i=0,j=a+b-1;i<j;i++,j--){
                if(str[i]!=str[j]){
                    flag=0;
                    break;
                }
            }

            if(flag==1)
                cout<<str<<endl;
            else 
                cout<<-1<<endl;
        }

        else{
            a-=n0;
            b-=n1;
            int flag = 1;
            for(long long int i=0,j=str.length()-1;i<j;i++,j--){
                if(str[i]!=str[j] && str[i]!='?' && str[j]!='?'){
                    flag=0;
                    break;
                }
                else if(str[i]==str[j] && str[i]!='?')
                    continue;
              

                else if(str[i]!=str[j]){
                    if(str[i]=='0' || str[j]=='0'){
                        str[i]='0';
                        str[j]='0';
                        a--;
                    }
                    else{
                        str[i]='1';
                        str[j]='1';
                        b--;
                    }


                }
                    
                
            }

            
            if(flag==1){
                for(long long int i=0,j=str.length()-1;i<=j;i++,j--){
                    if(str[i]==str[j] && str[i]=='?' && i!=j ){
                        if(a>=b){
                            str[i]='0';
                            str[j]='0';
                            a-=2;
                        }
    
                        else {
                            str[i]='1';
                            str[j]='1';
                            b-=2;
                        }
                    
                    }
                    
                    else if(i==j){
                        if(str[i]=='?'){
                            if(a>0)
                                str[i]='0';
                            else if(b>0)
                                str[i]='1';
                            else
                                flag=0;
                        }
                    }
                        
                }
            }
            
            if(flag==0)
                cout<<-1<<endl;
            else
                cout<<str<<endl;
            
                

        }
    test--;
    }
return 0;
}