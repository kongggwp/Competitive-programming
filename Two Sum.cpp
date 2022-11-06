class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size(), a=0 , b=0;
        for(int i=0 ; i<len ; i++)
        {
            for(int j=i+1 ; j<len ; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;b=j;
                }
            }
        }
        return {a,b};
    }
};
