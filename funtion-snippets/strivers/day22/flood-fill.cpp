class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc, int newColor, int prev){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size())
            return;
        if(image[sr][sc] == newColor || image[sr][sc]!=prev)
            return;
        image[sr][sc] = newColor;
        fill(image,sr-1,sc,newColor,prev);
        fill(image,sr+1,sc,newColor,prev);
        fill(image,sr,sc-1,newColor,prev);
        fill(image,sr,sc+1,newColor,prev);


    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        fill(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};