#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
 vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        int arr[8][8];
        memset(arr,-1,sizeof(arr));
        for(auto i:queens){
            arr[i[0]][i[1]] = 0;
        }
        vector<vector<int>> res;
        int f1=1,f2=1;
        arr[king[0]][king[1]]=1;
        for(int i=king[0],j=king[0];i>=0 || j<8;i--,j++ ){
            if(i>=0 && f1==1){
                if(arr[i][king[1]]==0){
                    vector<int> temp(2);
                    temp[0]=i;
                    temp[1]=king[1];
                    res.push_back(temp);
                    f1=0;
                }
            }
            
             if(j<8 && f2==1){
                if(arr[j][king[1]]==0){
                    vector<int> temp(2);
                    temp[0]=j;
                    temp[1]=king[1];
                    res.push_back(temp);
                    f2=0;
                }
            }
            
            if(f1==0 && f2==0)
                break;
        }
            f1=1,f2=1;
           for(int i=king[1],j=king[1];i>=0 || j<8;i--,j++ ){
            if(i>=0 && f1==1){
                if(arr[king[0]][i]==0){
                    vector<int> temp(2);
                    temp[0]=king[0];
                    temp[1]=i;
                    res.push_back(temp);
                    f1=0;
                }
            }
            
             if(j<8 && f2==1){
                if(arr[king[0]][j]==0){
                    vector<int> temp(2);
                    temp[0]=king[0];
                    temp[1]=j;
                    res.push_back(temp);
                    f2=0;
                }
            }
            
            if(f1==0 && f2==0)
                break;
        }
           f1=1,f2=1;
           for(int i=king[0],j=king[1],k=king[0],l=king[1];(i>=0 && j>=0) || (k<8 && l<8);i--,j--,k++,l++ ){
            if(i>=0 && j>=0 && f1==1){
                if(arr[i][j]==0){
                    vector<int> temp(2);
                    temp[0]=i;
                    temp[1]=j;
                    res.push_back(temp);
                    f1=0;
                }
            }
            
             if(k<8 && l<8 && f2==1){
                if(arr[k][l]==0){
                    vector<int> temp(2);
                    temp[0]=k;
                    temp[1]=l;
                    res.push_back(temp);
                    f2=0;
                }
            }
            
            if(f1==0 && f2==0)
                break;
        } 
        f1=1,f2=1;
        for(int i=king[0],j=king[1],k=king[0],l=king[1];(i>=0 && j<8) || (k<8 && l>=0);i--,j++,k++,l-- ){
            if(i>=0 && j<8 && f1==1){
                if(arr[i][j]==0){
                    vector<int> temp(2);
                    temp[0]=i;
                    temp[1]=j;
                    res.push_back(temp);
                    f1=0;
                }
            }
            
             if(k<8 && l>=0 && f2==1){
                if(arr[k][l]==0){
                    vector<int> temp(2);
                    temp[0]=k;
                    temp[1]=l;
                    res.push_back(temp);
                    f2=0;
                }
            }
            
            if(f1==0 && f2==0)
                break;
        }  
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}