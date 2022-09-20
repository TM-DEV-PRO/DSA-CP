#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<string> items;
    vector<int> quants, prices;
    for (int i = 0; i < N; i++)
    {
        string item;
        int quant,price;
        cin>>item>>quant>>price;
        items.push_back(item);
        quants.push_back(quant);
        prices.push_back(price);
    }
    int M;
    cin>>M;
    vector<string> items_Avail;
    vector<int> max_quants, prices_in;
    for (int i = 0; i < M; i++)
    {
        string item;
        int quant,price;
        cin>>item>>quant>>price;
        items_Avail.push_back(item);
        max_quants.push_back(quant);
        prices_in.push_back(price);
    }

    long int min_cost=0;

    for(int i=0;i<M;i++){
        string item = items_Avail[i];
        for(int j=0;j<N;j++){
            if(items[j]==item){
                if(prices_in[i]<=prices[j]){
                    if(quants[j]<=max_quants[i]){
                        min_cost+=quants[j]*prices_in[i];
                    }
                    else{
                        int left = quants[j]-max_quants[i];
                        min_cost+=(max_quants[i]*prices_in[i])+(left*prices[j]);
                    }

                    items[j]="sold";
                }
            }
        }
    }

    for(int i=0;i<N;i++){
        if(items[i]!="sold"){
            min_cost+=quants[i]*prices[i];
        }
    }
    
    cout<<min_cost;
    return 0;
}