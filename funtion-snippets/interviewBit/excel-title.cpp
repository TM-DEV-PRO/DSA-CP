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
string convertToTitle(int A) {
    string title = "";
  
    while(A){
        int rem = A%26;
        //cout<<rem<<" ";
        if(rem==0){ // As when rem =0 , A/26 do not minus rem that we should and also 0 means z 
            A=A-26;
            rem=26;
        }
        title.push_back('A'+rem-1);
        A=A/26;
    }
    //cout<<endl;
    reverse(title.begin(),title.end());
    return title;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}