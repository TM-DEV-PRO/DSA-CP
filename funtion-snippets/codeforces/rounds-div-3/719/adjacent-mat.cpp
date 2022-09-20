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

        int arr[n][n];

        int even = (n%2==0)?n*n:n*n-1;
        int odd = (n%2!=0)?n*n:n*n-1;

        if(n==2)
        cout<<-1<<endl;
        else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(odd>0){
                    arr[i][j]=odd;
                    odd-=2;
                    cout<<arr[i][j]<<" ";
                }
                else{
                    arr[i][j] = even;
                    even-=2;
                    cout<<arr[i][j]<<" ";
                }
            }

            cout<<endl;
        }

        }
    test--;
    }
return 0;
}