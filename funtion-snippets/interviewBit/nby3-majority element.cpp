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
#include <numeric>
#include <iterator>
using namespace std;
int repeatedNumber(const vector<int> &A) {
    int ele1=NULL, ele2=NULL, count1=0,  count2=0;
    
    for(int i=0;i<A.size();i++){
        if((ele1==NULL && A[i]!=ele2) || A[i]==ele1){
            ele1=A[i];
            count1++;
        }
        else if(ele2==NULL || A[i]==ele2){
            ele2=A[i];
            count2++;
        }
        
        else {
            count1--;
            count2--;
            if(count1==0)ele1=NULL;
            if(count2==0)ele2=NULL;
        }
    }
    // cout<< ele1 << " " << ele2 << endl;
    if(ele1==NULL && ele2==NULL)return -1;
    
    
    count1=0, count2=0;
    for(auto i:A){
        if(ele1!=NULL){
            if(i==ele1)count1++;
        }
        
        if(ele2!=NULL){
            if(i==ele2)count2++;
        }
    }
    // cout << count1 << " " << count2 << endl;
    if(count1>floor(A.size()/3))return ele1;
    else if(count2>floor(A.size()/3)) return ele2;
    else return -1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}