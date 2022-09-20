#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        long long int n,m,x;
        cin>>n>>m>>x;

        long long int r = x%n;
        long long int c = x/n;
        if(r==0){
            r=n;
        }
        else
         c++;
        //cout<<r<<" "<<c<<" ";
        x = m*(r-1) + c;

        cout<<x<<endl;
        

    test--;
    }
return 0;
}