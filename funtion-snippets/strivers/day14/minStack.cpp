#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class MinStack {
public:
    stack<int> ele, mn;
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int val){
        if(mn.empty())
            mn.push(val);
        else if(val<=mn.top())
            mn.push(val);

        ele.push(val);
    }
    
    void pop() {
        if(!mn.empty()){
            if(ele.top()==mn.top())
                mn.pop();
        }
        ele.pop();
    }
    
    int top() {
        return ele.top();
    }
    
    int getMin() {
               
        return mn.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}