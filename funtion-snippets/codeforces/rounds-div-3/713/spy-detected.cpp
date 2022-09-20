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
    vector<int> arr(n);

    for(auto &i:arr)
        cin>>i;


    for(int i=0;i<n-2;i++){
        if(arr[i]!=arr[i+1] && arr[i]!=arr[i+2]){
            cout<<i+1<<endl;
            break;
        }
        if(i==n-3){
            if(arr[i]==arr[i+1])
                cout<<i+2+1<<endl;
            else if (arr[i]==arr[i+2])
                cout<<i+1+1<<endl;
            else
                cout<<i+1<<endl;
        }
    }
 test--;
 }
return 0;
}