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
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
Node* flatten(Node* head) {
        if(head==NULL)
            return head;
        Node *curr,*back=NULL;
        stack<Node*> left;
        left.push(head);
        while(!left.empty()){
            curr =left.top();
            left.pop();
            //cout<<curr->val<<" ";
            if(curr->child!=NULL){
                if(curr->next!=NULL)
                    left.push(curr->next);
                
                left.push(curr->child);
                curr->prev=back;
                back=curr;
                curr->next=curr->child;
                curr->child=NULL;
       
            }
            else if(curr->child==NULL){
                  if(curr->next!=NULL)
                      left.push(curr->next);
                  else{
                      if(!left.empty())
                          curr->next = left.top();
                  }  
                  curr->prev=back;
                  
                  back=curr;
                  
            }
        }
        
        return head;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}