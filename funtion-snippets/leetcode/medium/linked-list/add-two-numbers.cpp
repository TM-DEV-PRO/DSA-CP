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
  ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
        unsigned long long int num1 = 0, num2 = 0;
        ListNode *h1=l1, *h2=l2;
        while(h1!=NULL){
            num1 = num1*10 + h1->val;
            h1=h1->next;
        }
        
        while(h2!=NULL){
            num2 = num2*10 + h2->val;
            h2 = h2->next;
        }
        
        unsigned long long int num = num1+num2;
        if(num==0)
        {
            ListNode *head = new ListNode(0);
            return head;
        }
       unsigned long long int d = log10(num);
      //  cout<<d<<" "<<num<<endl;
       
        ListNode *head = new ListNode(num / pow(10,d));
        ListNode *prev = head;
       
      //  cout<<d<<" "<<num<<endl;
        while(d>0){
          unsigned  long long int x = pow(10,d);
            num = num % x;
            d--;
           // cout<<d<<" "<<num<<endl;
            ListNode *temp = new ListNode(num / pow(10,d));
            
            prev->next = temp;
            prev = temp;
        }
        
        return head;
  }

 ListNode* addTwoNumbers2(ListNode* l1, ListNode* l2) {
       if(l1->val==0)
           return l2;
        if(l2->val==0)
            return l1;
        
        stack<int> s1,s2;
        
        ListNode *h1=l1, *h2=l2;
        while(h1!=NULL){
            s1.push(h1->val);
            h1=h1->next;
        }
        
        while(h2!=NULL){
            s2.push(h2->val);
            h2=h2->next;
        }
        
        int carry = 0;
        ListNode *head = new ListNode(0);
        ListNode *curr = head;
        while(!s1.empty() && !s2.empty()){
            int rem = (carry+s1.top()+s2.top())%10;
            carry = (carry+s1.top()+s2.top())/10;
            ListNode *temp =new ListNode(rem);
            curr->next = temp;
            curr=temp;
            s1.pop();
            s2.pop();
        }
        while(!s1.empty()){
            int rem = (carry+s1.top())%10;
            carry = (carry+s1.top())/10;
            ListNode *temp =new ListNode(rem);
            curr->next = temp;
            curr=temp;
            s1.pop();
        }
        
        while(!s2.empty()){
            int rem = (carry+s2.top())%10;
            carry = (carry+s2.top())/10;
            ListNode *temp =new ListNode(rem);
            curr->next = temp;
            curr=temp;
            s2.pop();
        }
        head=head->next;
        if(carry!=0)
        {
            ListNode *temp =new ListNode(carry);
            curr->next = temp;
            curr=temp;
        }
        ListNode *prev = NULL;
        
        while(head!=NULL){
            ListNode *temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        
        return prev;
        }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}