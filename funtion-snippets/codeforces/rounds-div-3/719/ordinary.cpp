#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long int test;
    std::cin>>test;
    while(test)
    {
        long long int n;
        cin>>n;

        long long int d = floor(log10(n)+1);

        long long int res =0;

        res = (d-1)*9;

        long long int x = n/(pow(10,d-1));
        res += x - 1;
        
        long long int a = 0;
        while(d--){
           a=a*10+x;
        }

        if(a<=n)
            res++;
        
        cout<<res<<endl;
    test--;
    }
return 0;
}