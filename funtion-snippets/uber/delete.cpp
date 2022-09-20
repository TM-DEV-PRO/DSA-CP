int solve(vector<int> &arr,int p,int q,int r,int i,int sum){
    if(i>=arr.size()){
        if(p==0 && q==0 && r==0)
            return sum;
        return -1000000;
    }
    if(p==0 && q==0 && r==0)
            return sum;
    int d0=-1000000,d1=-100000,d2=-100000,d3=-1000000;
    d0 = solve(arr,p,q,r,i+1,sum);
    if(p>0)
        d1 = solve(arr,p-1,q,r,i+1,sum-arr[i]);
    if(q>0 && i+1<arr.size())
        d2 = solve(arr,p,q-1,r,i+2,sum-arr[i]-arr[i+1]);
    if(r>0 && i+2<arr.size())
        d3 = solve(arr,p,q,r-1,i+3,sum-arr[i]-arr[i+1]-arr[i+2]);

    return max(d0,max(d1,max(d2,d3)));
}

int optimalDeletions(vector<int> arr, int p, int q, int r) {
    
}
