#include<bits/stdc++.h>
using namespace std;
const unsigned long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;

unsigned long long int md = 1000000007LL;

vector<vector<unsigned long long int>> arr;
vector<unsigned long long int> child;

unsigned long long int solve(unsigned long long int idx){
    
    vector<unsigned long long int> temp;
    child[idx] = 1;
    
    for(auto i:arr[idx]){
        if(child[i]==0){
            unsigned long long int subSum = solve(i);
            temp.push_back(subSum);
        }
    }
    
    unsigned long long int sum =0;
    sort(temp.begin(),temp.end(),[](unsigned long long int x, unsigned long long int y){
        return x>y;
    });
    
    for(unsigned long long int i=0;i<temp.size();i++)
        sum+=((i+1)*temp[i]);
    
    return 1+sum;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    unsigned long long int test;
    std::cin>>test;
    while(test--)
    {
        unsigned long long int n,x;
        cin>>n>>x;
        arr.resize(n);
        child.resize(n);
        for(unsigned long long int i=0;i<n-1;i++){
            unsigned long long int a,b;
            cin>>a>>b;
            arr[a-1].push_back(b-1);
            arr[b-1].push_back(a-1);
        }
        
        unsigned long long int sum = solve(0);
        
        sum = sum%md;
        x=x%md;
        cout<<(sum*x)%md<<endl;
        arr.clear();
        child.clear();
        
    }
    
    return 0;
}