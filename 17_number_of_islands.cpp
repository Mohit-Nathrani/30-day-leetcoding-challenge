class Solution {
    int n,m; 
public:
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size(); 
        if(n==0) 
        	return 0;
        m = grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    DFS(grid,i,j);
                }
            }
        }
        return count;
    }
    
    void DFS(vector<vector<char>>& grid,int i,int j){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0') 
        	return;
        grid[i][j]='0';
        DFS(grid,i+1,j);
        DFS(grid,i,j+1);
        DFS(grid,i-1,j);
        DFS(grid,i,j-1);
    }
};