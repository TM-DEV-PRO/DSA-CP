#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        int n;
        cin>>n;
        char mat[n][n];
        int r1,c1,r2,c2;
        int flag=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
                if(flag==1 && mat[i][j]=='*'){
                    r1=i;
                    c1=j;
                    flag=0;
                }

                else if(mat[i][j]=='*'){
                    r2=i;
                    c2=j;
                }
            }
        }

        int r3,c3,r4,c4;

        if(r1==r2){
            if(r1==n-1){
                r3=r1-1;
                c3=c1;
                r4=r2-1;
                c4=c2;
            }

            else{
                r3=r1+1;
                c3=c1;
                r4=r2+1;
                c4=c2;
            }

        }

        else if(c1==c2){
            if(c1==n-1){
                r3=r1;
                c3=c1-1;
                r4=r2;
                c4=c2-1;
            }

            else{
                r3=r1;
                c3=c1+1;
                r4=r2;
                c4=c2+1;
            }

        }

        else{
            r3=r2;
            c3=c1;
            r4=r1;
            c4=c2;
        }

        mat[r3][c3] = '*';
        mat[r4][c4] = '*';

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
               cout<<mat[i][j]<<" ";
            cout<<endl;
            
        }

    test--;
    }
return 0;
}