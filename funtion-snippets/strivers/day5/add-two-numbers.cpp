#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head,*prev;
        
        head=l1;
        
        int car = 0;
        while(l1!=NULL && l2!=NULL){
            int digit = l1->val + l2->val + car;
            car = digit/10;
            digit=digit%10;
            
            l1->val = digit;
            l2=l2->next;
            if(l1->next==NULL){
                l1->next=l2;
                prev=l1;
                l1=l2;
                break;
            }
            prev=l1;    
            l1=l1->next;
            
            
        }
        while(l1!=NULL){
            int digit = l1->val + car;
            car = digit/10;
            digit=digit%10;
            l1->val = digit;
            prev=l1;
            l1=l1->next;
        }
        
        if(car!=0){
            ListNode *temp = new ListNode(car);
            prev->next=temp;
        }
        
        return head;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}