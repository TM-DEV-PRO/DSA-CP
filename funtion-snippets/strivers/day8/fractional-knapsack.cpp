#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 static bool cmp(Item i1, Item i2){
        double x = i1.value/(double)i1.weight;
        double y = i2.value/(double)i2.weight;
        
        return x>y;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        
        double profit = 0.0;
        
        for(int i=0;i<n;i++){
            if(arr[i].weight<=W)
                profit+= (double)arr[i].value;
            else{
                profit+= (arr[i].value/(double)arr[i].weight)*W;
                break;
            }
            
            W-=arr[i].weight;
        }
        
        return profit;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}