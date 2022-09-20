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
int lengthOfLastWord(const string A) {
    if(A.empty())return 0;
    int flag=0,start=0,end=-1;
    for(int i = A.length()-1;i>=0;i--){
        if(flag==0 && A[i]!=' '){
            flag=1;
            end=i;
        }
        
        if(flag==1 && A[i]==' '){
            start=i+1;
            break;
        }
    }
    //cout<<A.length()<<" "<<start<<" "<<end<<endl;
   if(end==-1)return 0;
   else return end-start+1;
    
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}