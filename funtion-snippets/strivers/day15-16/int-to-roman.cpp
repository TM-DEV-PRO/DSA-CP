#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
    string intToRoman(int num) {
        string rom[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV","I"};
        int dec[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string res="";
        for(int i=0;num!=0;i++){
            //cout<<num<<" "<<dec[i]<<endl;
            while(num>=dec[i]){
                res+=rom[i];
                num-=dec[i];
            }
            
        }
        
        return res;
       
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}