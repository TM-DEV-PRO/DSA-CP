#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class LRUCache {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode *prev;
        ListNode() : val(0), next(nullptr), prev(nullptr) {}
        ListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
        ListNode(int x, ListNode *next, ListNode *prev) : val(x), next(next), prev(prev) {}
    };
    int c;
    ListNode *head,*tail;
    unordered_map<int,pair<int,ListNode*>> mp; 
    LRUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            ListNode *temp = mp[key].second;
            if(temp!=tail){
                if(temp==head){
                    temp->next->prev=nullptr;
                    head=head->next;
                    tail->next = temp;
                    temp->next=nullptr;
                    temp->prev = tail;
                    tail=temp;
                }
                else{
                    ListNode *temp2 = temp->prev;
                    temp2->next = temp->next;
                    temp2->next->prev=temp2;
                    tail->next = temp;
                    temp->next=nullptr;
                    temp->prev = tail;
                    tail=temp;
                }
            }
            return mp[key].first;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        
        if(mp.find(key)!=mp.end()){
            ListNode *temp = mp[key].second;
             if(temp!=tail){
                if(temp==head){
                    temp->next->prev=nullptr;
                    head=head->next;
                    tail->next = temp;
                    temp->next=nullptr;
                    temp->prev = tail;
                    tail=temp;
                }
                else{
                    ListNode *temp2 = temp->prev;
                    temp2->next = temp->next;
                    temp2->next->prev=temp2;
                    tail->next = temp;
                    temp->next=nullptr;
                    temp->prev = tail;
                    tail=temp;
                }
            }
            mp[key].first = value;
            return;
        }
        if(mp.size()==c){
            mp.erase(head->val);
            if(head==tail){
                delete(head);
                head=nullptr;
                tail=nullptr;
            }
            else{
                ListNode * temp = head;
                head=head->next;
                head->prev=nullptr;
                delete(temp);
            }
        }
            
        if(mp.size()==0){
            
            head = new ListNode(key);
            tail=head;
           
        }
        
        else{
            tail->next = new ListNode(key);
            tail->next->prev=tail;
            tail=tail->next;
            
        } 
        
        mp[key] = {value,tail};
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}