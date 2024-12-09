class Solution
{
public:
    vector<bool> ans;

    void solve(vector<int> &nums, vector<int> &quer)
    {
        int start = quer[0];
        int end = quer[1];
        
        bool isSpecial = true;
        bool prevEven = nums[start] % 2 == 0;

        // Check all numbers in the given range
        for (int i = start + 1; i <= end; i++)
        {
            bool currEven = nums[i] % 2 == 0;
            
            // Check if the parity alternates
            if (currEven == prevEven)
            {
                isSpecial = false;
                break;
            }

            prevEven = currEven;
        }

        ans.push_back(isSpecial);
    }

    vector<bool> isArraySpecial(vector<int> &nums, vector<vector<int>> &queries)
    {
        for (int i = 0; i < queries.size(); i++)
        {
            solve(nums, queries[i]);
        }
        return ans;
    }
};
