Node *flatten(Node *root)
{  if(root==NULL)
     return root; 
   if(root->next==NULL){
       return root;
   }
   
   Node *l2 = flatten(root->next);
   
   Node *head, *l1=root, *curr;
   
   if(l1->data<=l2->data){
       head=l1;
       l1=l1->bottom;
   }
   
   else{
       head=l2;
       l2=l2->bottom;
   }
   
   curr=head;
   
    while(l1!=NULL && l2!=NULL){
           if(l1->data<=l2->data){
                curr->bottom=l1;
                curr=l1;
                l1=l1->bottom;
                   
            }
            else{
                curr->bottom=l2;
                curr=l2;
                l2=l2->bottom;
            }
        }
        
        curr->bottom = (l1!=NULL)?l1:l2;
    
    return head;
}