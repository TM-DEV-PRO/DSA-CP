#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
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
#include <iterator>
using namespace std;

void reverseArray(vector<int> &array, int start_index, int end_index)
{

    int low = start_index, high = end_index;

    while (low < high)
    {
        swap(array[low], array[high]);

        low++;
        high--;
    }
}


void rotate(vector<vector<int> > &A) {
   

    int size = A.size();
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    
    for(auto &i:A)reverseArray(i,0,size-1);
    
    
}





void rotate90Clockwise(vector<vector<int>> &a,int N) 
{ 
  
   
    for (int i = 0; i < N / 2; i++) { 
        for (int j = i; j < N - i - 1; j++) { 
  
            
            int temp = a[i][j]; 
            a[i][j] = a[N - 1 - j][i]; 
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j]; 
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i]; 
            a[j][N - 1 - i] = temp; 
        } 
    } 
    
  
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

return 0;
}