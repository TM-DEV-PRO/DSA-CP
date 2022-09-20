#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 int median(vector<vector<int>> &matrix, int r, int c){
         int l = 2001;
         int h = -1;
         for(auto i:matrix){
            l=min(l,i[0]);
            h=max(h,i[c-1]);
         }
         
         
         while(l<h){
             int m = l + (h-l)/2;
             int count = 0;
             for(int i=0;i<r;i++){
                 count+= (upper_bound(matrix[i].begin(),matrix[i].end(),m)-matrix[i].begin());
             }
             
             if(count < (r*c+1)/2)
                l=m+1;
             else
                h=m;
         }
         
         return l;    
         
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}