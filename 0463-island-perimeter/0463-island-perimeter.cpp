class Solution {
public:
    void solve(vector<vector<int>>& grid, int i, int j, int& peri){

        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0 ){
            peri++;
            return;
        }

        if (grid[i][j] == -1)   //ALREADY VISITED CHECK
            return;

        grid[i][j] = -1;  // MARK VISITED

        solve(grid,i-1,j,peri);  //UP
        solve(grid,i+1,j,peri);  //DOWN   
        solve(grid,i,j-1,peri);  //LEFT
        solve(grid,i,j+1,peri);  //RIGHT
    }
    int islandPerimeter(vector<vector<int>>& grid) {

        int peri=0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j]==1){
                    solve(grid, i, j, peri);
                    return peri;
                }
            }
        }
        return 0;
    }
};