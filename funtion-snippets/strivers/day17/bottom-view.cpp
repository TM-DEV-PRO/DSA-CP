vector<pair<int,int>> res(2*100002);

void solve(Node *root,int i, int h){
    if(root==NULL)
        return;
    if(h>=res[i].second){
        res[i].first=root->data;
        res[i].second=h;
    }
    solve(root->left,i-1,h+1);
    solve(root->right,i+1,h+1);
}

//Function to return a list containing the bottom view of the given tree.
vector <int> bottomView(Node *root)
{  for(auto &i:res){
        i.first=-1;
        i.second=-1;
       
    }
   solve(root,100000,0);
   vector<int> bview;
   for(auto i:res)
    if(i.first!=-1)
        bview.push_back(i.first);
   return bview;
}

