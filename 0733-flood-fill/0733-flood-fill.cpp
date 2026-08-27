class Solution {
public:

    //DFS function
    void solve(vector<vector<int>>& image, int i, int j, int color, int val){
        if(i<0 || i>=image.size() || j<0 || j>= image[0].size() || image[i][j] == color || image[i][j] != val){ return; }
        
        image[i][j]=color;
        solve(image,i-1,j,color,val);  //
        solve(image,i+1,j,color,val);
        solve(image,i,j-1,color,val);
        solve(image,i,j+1,color,val);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        solve(image,sr,sc,color,val);
        return image;
    }
};