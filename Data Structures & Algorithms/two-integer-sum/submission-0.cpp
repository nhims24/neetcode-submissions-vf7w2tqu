class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> res;

        for(int i = 0; i < nums.size(); ++i){ //x is the value not index
            int need = target - nums[i];
            auto it = mp.find(need);
            if(it != mp.end()){
                res.push_back(it->second);
                res.push_back(i);
            }
            mp[nums[i]] = i;
        }

        return res;
    }
};
