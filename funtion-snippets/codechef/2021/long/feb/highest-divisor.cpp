#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int ans=1;
    int i=1;
    while(i<=10){
        if(n%i==0)
            ans=i;
        i++;
    }

    return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
cout<<solve(n);
return 0;
}