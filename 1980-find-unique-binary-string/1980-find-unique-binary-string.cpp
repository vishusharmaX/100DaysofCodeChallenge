class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        string test = "";
        int capacity = nums[0].length();
        int range = std::pow(2, capacity);

        for(int i=0; i < range; i++)
        {
            for(int c=0; c < capacity; c++)
            {
                if((i>>c) & 1)
                    test = "1" + test;
                else
                    test = "0" + test;
            }
            for(int s = 0; s < nums.size(); s++)
            {
                if(nums[s] == test)
                    break;
                if(s == (nums.size()-1))
                    return test;
            }
            test.clear();
        }
        return test;
    }
};