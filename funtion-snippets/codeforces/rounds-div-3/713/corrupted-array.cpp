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
        vector<int> arr(n+2);

        for(auto &i:arr)
            cin>>i;
            
    sort(arr.begin(),arr.end());
    
    long long int sum = 0;

    sum = accumulate(arr.begin(),arr.end()-2,sum);
    //cout<<sum<<" ";
    if(sum == arr[n] || sum == arr[n+1]){
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }

    else{
        sum+=arr[n];

        int flag = 0;

        for(int i=0;i<n;i++){
            sum-=arr[i];

            if(sum==arr[n+1]){
                flag=1;
                arr[i]=-1;
                break;
            }

            else
                sum+=arr[i];
        }

        if(flag==1){
            for(int i=0;i<=n;i++){
                if(arr[i]!=-1)
                    cout<<arr[i]<<" ";
            }
        }

        else
            cout<<-1;
    }

    cout<<endl;
       
    test--;
    }
return 0;
}