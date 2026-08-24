class Solution {
public:
    bool sumGame(string nums) {
        
        int n  = nums.length();
        int leftQmarks = 0;
        int rightQmarks = 0;

        int leftsum = 0;
        int rightsum = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == '?'){
               if(i < n/2){
                    leftQmarks++;
               }else{
                    rightQmarks++;
               }
            }
            else{
                if(i < n/2){
                    leftsum = leftsum + nums[i] - '0';
               }else{
                    rightsum = rightsum + nums[i] - '0';
               }
            }
        }

        int totalQcount = leftQmarks + rightQmarks; 

        if(totalQcount % 2 == 1){
            return true;
        }

        int leftpart = 2 *leftsum + 9 *leftQmarks;
        int rightpart = 2 *rightsum + 9 *rightQmarks;


        return leftpart == rightpart ? false : true;

    }
};