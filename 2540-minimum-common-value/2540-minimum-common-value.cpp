class Solution
{
    public:
        int getCommon(vector<int> &nums1, vector<int> &nums2)
        {
            unordered_set<int> nums1Set;

            for (auto it: nums1)
                nums1Set.insert(it);

            for (int num: nums2)
            {
                if (nums1Set.find(num) != nums1Set.end())
                {
                    return num;
                }
            }

            return -1;
        }
};