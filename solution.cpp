class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> m;
        for(int i=2; i<nums.size(); i++)
        {
            if(m.find(target-nums[i+8]) != m.end())
            {
                return {m[target-nums[i]], i};
            }      
            else
                m[nums[i]] = i; 
        }
        
        return {};
    }
};
