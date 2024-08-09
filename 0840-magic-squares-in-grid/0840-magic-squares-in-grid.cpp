class Solution {
public:
    int findRowSum(vector<vector<int>>&grid, int r , int c){

        int sum = 0;
        vector<int>visited(10,0);
        
        for(int i = 0; i < 3; i++){
            int rowsum = 0;
            for(int j= 0; j < 3; j++){
                int val = grid[r+i][c+j];
                if(val == 0 || val >= 10 || visited[val]){
                    return -1;
                }
                visited[val] = true;
                rowsum += val;
            }
            if(i == 0){
                sum = rowsum;
            }
            else{
                if(sum != rowsum){
                    return -1;
                }
            }
        }

        return sum;

    }
    int findColSum(vector<vector<int>>&grid, int r , int c){
        int sum = 0;
        for(int j = 0; j< 3; j++){
            int colsum = 0;
            for(int i= 0; i < 3; i++){
                 int val = grid[r+i][c+j];  
                 colsum += val;
            }
            if(j == 0){
                sum = colsum;
            }
            else{
                if(sum != colsum){
                    return -1;
                }
            }
        }

        return sum;

    }
    int findDigSum(vector<vector<int>>&grid, int r , int c){
        
        int sum1 = grid[r][c] + grid[r+1][c+1]+  grid[r+2][c+2];
        int sum2 = grid[r][c+2] + grid[r+1][c+1] + grid[r+2][c];
        if(sum1 != sum2){
            return -1;
        }

        return sum1;
    }
    bool isMagic(vector<vector<int>>&grid, int r, int c){
        int rowsum = findRowSum(grid,r,c);
        if(rowsum == -1){
            return false;
        }
        int colsum = findColSum(grid,r,c);
        if(colsum == -1){
            return false;
        }
        int digsum = findDigSum(grid,r,c);
        if(digsum == -1)
            return false;
        
        if(rowsum == colsum && rowsum == digsum){
            return true;
        }

        return false;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for(int i = 0; i < n-2; i++){
            for(int j = 0; j < m-2; j++){
                if(isMagic(grid,i,j)){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};