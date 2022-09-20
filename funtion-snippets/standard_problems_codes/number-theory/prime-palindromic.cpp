#include<bits/stdc++.h>
using namespace std;
int solve(int N, vector<int> C, vector<int> W){
    int amount;
    amount = accumulate(W.begin(),W.end(),0);

    sort(C.begin(),C.end());

    int count = 0;
    int i = N-1;
    while(i>=0 && amount>0){
        if(amount<=C[i]){
            count++;
            break;
        }

        else{
            count++;
            amount-=C[i];
        }

        i--;
    }

    return count;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}