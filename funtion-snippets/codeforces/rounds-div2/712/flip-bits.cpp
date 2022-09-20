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
        string a,b;
        cin>>a>>b;

        int pre0[n], pre1[n];
        int n0=0, n1=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0')
                n0++;
            else
                n1++;
            pre0[i]=n0;
            pre1[i]=n1;
        }

        string res = "YES";
        int f=1;
        for(int i=n;i>=0;){
            do{
                i--;
            }while(i>=0 && ((f==1 && a[i]==b[i]) || (f==0 && a[i]!=b[i])));

            if(i>=0){
                if(pre0[i]!=pre1[i]){
                    res = "NO";
                    break;
                }
                
                else{
                   do{
                       i--;
                   }while(i>=0 && ((f==0 && a[i]==b[i]) || (f==1 && a[i]!=b[i])));

                    if(f==0)
                        f=1;
                    else
                        f=0;
                
                   i++;
                }
            }
        }

        cout<<res<<endl;

    test--;
    }
return 0;
}