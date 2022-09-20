#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

  void setValues(vector<vector<int>>& matrix,int i,int f){
        
        if(f==0){
            for(int j=0;j<matrix[i].size();j++)
                matrix[i][j] = 0;  
        }
        
        else{
            for(int j=0;j<matrix.size();j++)
                matrix[j][i]=0;
        }
        
    }

    void setZeroes(vector<vector<int>>& matrix) {
          int isCol = 0;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0)
                isCol=1;
            for(int j=1;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
             
                }
            }
        }
      
         for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[i].size();j++){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j] = 0;
            }
        }
      
        
        
        if(matrix[0][0]==0)
            setValues(matrix,0,0);
        if(isCol==1)
            setValues(matrix,0,1);
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}