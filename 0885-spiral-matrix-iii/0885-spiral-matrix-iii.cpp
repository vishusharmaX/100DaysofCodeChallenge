class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int i, int j) {
        int total=cols*rows;
        vector<vector<int>>ans;
        int moves=1;
        int moves_count=0;
        int direction=0;
        int ans_size=1;
        ans.push_back({i,j});
        while(ans_size<total){
            if(direction==0){
                for(int k=0;k<moves;k++){
                    j++;
                    if(i>-1 && i<rows && j>-1 && j<cols){
                        ans_size++;
                        ans.push_back({i,j});
                    }
                }
            }
            else if(direction==1){
                for(int k=0;k<moves;k++){
                    i++;
                    if(i>-1 && i<rows && j>-1 && j<cols){
                        ans_size++;
                        ans.push_back({i,j});
                    }
                }
            }
            else if(direction==2){
                for(int k=0;k<moves;k++){
                    j--;
                    if(i>-1 && i<rows && j>-1 && j<cols){
                        ans_size++;
                        ans.push_back({i,j});
                    }
                }
            }
            else{
                for(int k=0;k<moves;k++){
                    i--;
                    if(i>-1 && i<rows && j>-1 && j<cols){
                        ans_size++;
                        ans.push_back({i,j});
                    }
                }
            }
            direction=(direction+1)%4;
            moves_count++;
            if(moves_count%2==0){
                moves++;
            }
        }
        return ans;
    }
};