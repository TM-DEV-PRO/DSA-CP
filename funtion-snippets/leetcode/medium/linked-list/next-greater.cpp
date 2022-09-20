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
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 vector<int> nextLargerNodes(ListNode* head) {
        ListNode *prev = NULL;
        while(head!=NULL){
            ListNode *temp = head->next;
            head->next = prev;
            prev= head;
            head = temp;
        }
        
        head = prev;
        
        stack<int> s;
        vector<int> ans;
        while(head!=NULL){
            
            while(!s.empty()){
                if(head->val>=s.top())
                    s.pop();
                else
                    break;
            }
            
            if(s.empty())
                ans.push_back(0);
            else
                ans.push_back(s.top());
            s.push(head->val);
            head = head->next;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}