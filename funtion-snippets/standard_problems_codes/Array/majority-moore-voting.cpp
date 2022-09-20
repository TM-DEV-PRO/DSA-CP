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

int majorityElement(vector<int> &array, int size){
    int count =0,res=0;

    for(int i=0;i<size;i++){
        if(count==0)res=i;

        count+= (array[i]==array[res])?1:-1;
    }
    
    count=0;
    for(auto i:array){
        if(i==array[res])count++;
    }

    if(count>size/2)return res;

    return -1;
}




int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
std::cin>>test;
while(test)
{
 int N;
 cin>>N;
 vector<int> array(N);
 for(auto &i:array)cin>>i;

 cout<<majorityElement(array,N)<<"\n";
test--;
}
return 0;
}