#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
    int f = 1;
    int n1=0,n2=0;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(f==1){
            mx.push(num);
            f=0;
            n1++;
            return;
        }
        
        if(num<=mx.top()){
            mx.push(num);
            n1++;
            if(n1-n2>1){
                int x = mx.top();
                mx.pop();
                mn.push(x);
                n2++;
                n1--;
            }
        }
        
         else{
            mn.push(num);
            n2++;
            if(n2-n1>=1){
                int x = mn.top();
                mn.pop();
                mx.push(x);
                n1++;
                n2--;
            }
        }
        
    }
    
    double findMedian() {
        if(n1==n2)
            return (mx.top()+mn.top())/2.0;
        
        else
            return mx.top()/1.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}