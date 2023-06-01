class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> integerMap;
        for(int i = 0; i < nums.size(); i++){
            if(integerMap.count(target-nums[i])){
                return {i, integerMap[target-nums[i]]};
            }
            integerMap[nums[i]] = i;
        }
        return {};
    }
};

//space complexity