class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int arr[101] = {0};
        int l[logs.size()];
        int r[logs.size()];
        for(int i=0;i<logs.size();i++){
            l[i] = logs[i][0];
            r[i] = logs[i][1];
        }
        
        for(int i=0;i<logs.size();i++){
            arr[l[i]-1950]++;
            arr[r[i]-1950]--;
        }
        
        int maxpop = arr[0], maxYear=0;
        
        for(int i=1;i<100;i++){
            arr[i] += arr[i-1];
            if(arr[i]>maxpop){
                maxpop = arr[i];
                maxYear = i;
            }
        }
        
        return maxYear+1950;
    }
};