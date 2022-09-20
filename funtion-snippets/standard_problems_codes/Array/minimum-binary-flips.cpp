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

int minGroupFlips(vector<int> &array){
    int size= array.size();

    int flag=0;
    int count =0;
    for( int i=1;i<size;i++){
        if(array[i]!=array[0] && flag==0){
            flag=1;
            cout<<"From: "<<i<<" ";
        }
        else {
            if(array[i]==array[0] && flag==1){
                count++;
                flag=0;
                cout<<"to "<<i-1<<"\n";
            }
        }
    }

    if(flag==1){
        count++;
        cout<<"to "<<size-1<<"\n";
    }

    return count;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}