#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
std::cin>>test;

while(test)
{
    string p1,p2,p,res="";
    cin>>p1>>p2;
    p = p1+" "+p2;
    
    string h1="",m1="";
    h1.push_back(p[0]);
    h1.push_back(p[1]);
    m1.push_back(p[3]);
    m1.push_back(p[4]);
    //cout<<p<<endl;
    int h = stoi(h1);
    int m = stoi(m1);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string x1,x2;
        cin>>x1>>x2;
        string x;
        x+= x1+" "+x2;
         string y1,y2;
        cin>>y1>>y2;
        string y;
        y+= y1+" "+y2;
        //cout<<x<<" "<<y<<endl;
        string xh1="",xm1="",yh1="",ym1="";
        xh1.push_back(x[0]);
        xh1.push_back(x[1]);
        xm1.push_back(x[3]);
        xm1.push_back(x[4]);
        yh1.push_back(y[0]);
        yh1.push_back(y[1]);
        ym1.push_back(y[3]);
        ym1.push_back(y[4]);
        int xh = stoi(xh1);
        int xm = stoi(xm1);
        int yh = stoi(yh1);
        int ym = stoi(ym1);
        if(p[6]=='A'){
            if(x[6]=='A'){
                if(y[6]=='A'){
                    if(((h>=xh && h!=12)||(h==xh))  && m>=xm && (h<=yh||h==12) && m<=ym)
                        res.push_back('1');
                    else 
                        res.push_back('0');
                }

                else{
                    if(((h>=xh && h!=12)||(h==xh)) && m>=xm)
                        res.push_back('1');
                    else 
                        res.push_back('0');
                }
            }

            else
                res.push_back('0');
            
        }

        else{
            if(x[6]=='A'){
                if(y[6]=='A')
                        res.push_back('0');
                

                else{
                    if((h<=yh||h==12) && m<=ym)
                        res.push_back('1');
                    else 
                        res.push_back('0');
                }
            }

            else{
                 if(((h>=xh && h!=12)||(h==xh)) && m>=xm && (h<=yh||h==12) && m<=ym)
                    res.push_back('1');
                else 
                    res.push_back('0');
            }
                
            
        }
    }

cout<<res<<"\n";
test--;
}
return 0;
}