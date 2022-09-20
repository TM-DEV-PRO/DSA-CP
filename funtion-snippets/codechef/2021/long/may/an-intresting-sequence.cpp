#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long long res = 0;
long long int md = 1000000007LL;
int N = 4e6 + 5; // 4000005
vector<int> cal(N), ans(N,0);
void init(){
    for(int i=0;i<N;i++)
        cal[i] = i;
}

void calCal(){
    for(int i=2;i<N;i++){
        if(cal[i]==i){
            cal[i] = i-1;
            for(int j=2*i;j<N;j+=i){
                cal[j] = (cal[j]/i)*(i-1);
            }
        }
    }
}

void calAns(){
    for(int i=1;i<N;i++){
        ans[i]+=i-1;
        for(int j=2*i;j<N;j+=i){
            ans[j]+=i*((1+cal[j/i])/2);
        }
    }
}

void clr(){
    cal.clear();
    ans.clear();
}

void ArrayConstruction(vector<int> &array, int maxNumber, vector<int> &freq)
{  
    for (int i = 1; i <= maxNumber; i++)
    {
        array[i]=i;
    }
  
    for (int i = 2; i <= maxNumber; i++)
    {
            
            for (int j = i; j <= maxNumber; j += i){
                int k = (j-1)/4;
                k = (2*k)/i;
                freq[j]+=k;
                // if(i%3==0 && j%3==0 && i!=3){
                //     array[j]-=(3*k);
                //     freq[j]-=k;
                // }
                k = k*i;
                array[j]+=k;
                
            }
    }
}



int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    init();
    calCal();
    calAns();
    // int maxNumber=N;
    
    // vector<int> Array(maxNumber + 1, 0), freq(maxNumber+1,0);

    // ArrayConstruction(Array, maxNumber, freq);

  
    
    int test;
    std::cin>>test;
    while(test)
    {
        int k;
        cin>>k;
        // if((4*k+1)%3!=0)
        //     res = Array[4*k+1] + (2*k - freq[4*k+1]-1);
        // else{
            
        //     for(int i=1;i<=2*k;i++){
        //         res+= __gcd(k+(i*i),k+((i+1)*(i+1)));
        //     }
        // }
        
       
        cout<<ans[4*k+1]<<endl;
        
         //res=0;
        //cout<<Array[4*k+1]<<" "<<freq[4*k+1]<<endl;
    test--;
    }

    // clr();
return 0;
}

// 6
// 14
// 18
// 24
// 42
// 44
// 42
// 68
// 54
// 60
// 116
// 90
// 78
// 120
// 90
// 144
// 146
// 108
// 174
// 188




// i/p:
// 20
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18
// 19
// 20

// o/p:
// 1 5 
// 3 1 1 9 
// 1 1 1 1 1 13 
// 1 1 1 1 1 1 1 17 
// 3 1 7 3 1 1 3 1 1 21 
// 1 5 1 1 1 1 5 1 1 1 1 25 
// 1 1 1 1 1 1 1 1 1 1 1 1 1 29 
// 3 1 1 3 11 1 3 1 1 3 1 1 3 1 1 33 
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 37 
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 41 
// 3 5 1 9 1 1 15 1 1 3 1 5 9 1 1 3 5 1 3 1 1 45 
// 1 1 7 1 1 1 1 1 1 7 1 1 1 1 1 1 7 1 1 1 1 1 1 49 
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 53 
// 3 1 1 3 1 1 3 1 19 3 1 1 3 1 1 3 1 1 3 1 1 3 1 1 3 1 1 57 
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 61 
// 1 5 1 1 1 13 5 1 1 1 1 5 1 1 1 1 5 1 13 1 1 5 1 1 1 1 5 1 1 1 1 65 
// 3 1 1 3 1 1 3 1 1 3 23 1 3 1 1 3 1 1 3 1 1 3 1 1 3 1 1 3 1 1 3 1 1 69 
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 73 
// 1 1 7 1 11 1 1 1 1 7 1 1 1 1 1 11 7 1 1 1 1 1 1 7 1 1 11 1 1 1 7 1 1 1 1 1 1 77 
// 3 1 1 9 1 1 3 1 1 3 1 1 27 1 1 3 1 1 3 1 1 9 1 1 3 1 1 3 1 1 9 1 1 3 1 1 3 1 1 81 


