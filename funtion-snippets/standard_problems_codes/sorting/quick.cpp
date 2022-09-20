#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;

int naivePartition(vector<int> &array, int low, int high){
    int pivot = array[high];
    int temp[high-low+1];
    int index=0;
    for(int i=low;i<=high;i++){
        if(array[i]<=pivot){
            temp[index]=array[i];
            index++;
        }
    }
    int pos = low + index-1;
    for(int i=low;i<=high;i++){
        if(array[i]>pivot){
            temp[index]=array[i];
            index++;
        }
    }

    for(int i=low;i<=high;i++){
        array[i]=temp[i-low];
    }

    return pos;
}

int lomutoPartition(vector<int>&array, int low, int high){
    int pivot = array[high];
    int i= low -1;
    for(int j=low;j<high;j++){
        if(array[j]<pivot){
            i++;
            swap(array[i],array[j]);
        }
    }
    swap(array[i+1],array[high]);
    return i+1;
}

int hoarePartition(vector<int> &array, int low, int high){
    int pivot = array[low];
    int i = low-1, j=high+1;

    while(true){
        do{
            i++;
        }while(array[i]<pivot);

        do{
            j--;
        }while(array[j]>pivot);

        if(i>=j)return j;

        swap(array[i],array[j]);
    }
}

void quickSort(vector<int> &array, int low, int high){
    if(low<high){
        int r_num = rand();
        r_num = low + r_num%(high-low+1);
        // for lomuto and naive
        swap(array[r_num],array[high]);

        // for hoare
        swap(array[r_num],array[low]);

        int pos= naivePartition(array,low,high);
        quickSort(array,low,pos-1);
        quickSort(array,pos+1,high);
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}