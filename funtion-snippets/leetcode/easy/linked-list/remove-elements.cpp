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
 ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            ListNode *temp = head;
            head=head->next;
            delete(temp);
        }
        
        ListNode *curr=head;
        
        while(curr!=NULL && curr->next!=NULL){
            if(curr->next->val==val){
                ListNode *temp = curr->next;
                curr->next = curr->next->next;
                delete(temp);
            }
            
            else
                curr=curr->next;
        }
        
        return head;
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}