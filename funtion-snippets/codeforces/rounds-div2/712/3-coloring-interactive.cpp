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
    int n;
    cin>>n;
    int w=0,b=1;
    int turns = n*n;
    int x = n;
    n=n*n;
    while(n--){
        int a;
        cin>>a;
        
        switch (a)
        {
        case 1:
            if(b<turns){
                cout<<2<<" "<<(b/x)+1<<" "<<(b%x)+1<<endl;
                if(x%2!=0)
                    b+=2;
                else{
                    if(b%x==x-1)
                        b+=1;
                    else if(b%x==x-2)
                        b+=3;
                    else
                        b+=2;
                }
            }

            else{
                cout<<3<<" "<<(w/x)+1<<" "<<(w%x)+1<<endl;
                if(x%2!=0)
                    w+=2;
                else{
                    if(w%x==x-1)
                        w+=1;
                    else if(w%x==x-2)
                        w+=3;
                    else
                        w+=2;
                }
            }
            break;
         case 2:
            if(w<turns){
                cout<<1<<" "<<(w/x)+1<<" "<<(w%x)+1<<endl;
                if(x%2!=0)
                    w+=2;
                 else{
                    if(w%x==x-1)
                        w+=1;
                    else if(w%x==x-2)
                        w+=3;
                    else
                        w+=2;
                }
            }

            else{
                cout<<3<<" "<<(b/x)+1<<" "<<(b%x)+1<<endl;
                if(x%2!=0)  
                    b+=2;
                else{
                    if(b%x==x-1)
                        b+=1;
                    else if(b%x==x-2)
                        b+=3;
                    else
                        b+=2;
                }
            }
            break;
         case 3:
            if(b<turns){
                cout<<2<<" "<<(b/x)+1<<" "<<(b%x)+1<<endl;
                if(x%2!=0)
                    b+=2;
                else{
                    if(b%x==x-1)
                        b+=1;
                    else if(b%x==x-2)
                        b+=3;
                    else
                        b+=2;
                }
                    
            }

            else{
                cout<<1<<" "<<(w/x)+1<<" "<<(w%x)+1<<endl;
                if(x%2!=0)
                    w+=2;
                else{
                    if(w%x==x-1)
                        w+=1;
                    else if(w%x==x-2)
                        w+=3;
                    else
                        w+=2;
                }
            }
            break;
        
        default:
            break;
        }
    }
return 0;
}