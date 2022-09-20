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
 vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> res;
      
        int n = 0;
        ListNode *curr = root,*prev=NULL;
        while(curr!=NULL){
            n++;
            curr = curr->next;
        }
        int rem = n%k;
        int each = n/k;
     
        curr=root;
        while(curr!=NULL){
            if(each==0){
                if(rem!=0){
                    prev=curr;
                    curr=curr->next;
                    rem--;
                }
                    res.push_back(root);
                    root=curr;
                    prev->next=NULL;
                    each=n/k;        
            }
            
            else
            {
                each--;
                prev=curr;
                curr=curr->next;
                if(curr==NULL){
                    res.push_back(root);
                }
            }
        }
    
        int left = k - res.size();
        while(left>0){
            res.push_back(NULL);
            left--;
        }
        
        return res;
        
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}