class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int j=1;
        while(i<nums.size()-1 && j<nums.size()){
            if(nums[i] == nums[j]){
                return true;
            }
            i++;
            j++;
        }
        return false;
    }

// O(logn) + O(n) runtime complexity - first sorts the vectors then loops through
// alternative but longer runtime solution below utilizes setsclass Solution {
    bool containsDuplicateAlt(vector<int>& nums) {
        std::set<int> numSet;
        for(auto num : nums){
            if(numSet.count(num)){
                return true;
            }
            numSet.insert(num);
        }
        return false;
        // sort(nums.begin(), nums.end());
        // int i=0;
        // int j=1;
        // while(i<nums.size()-1 && j<nums.size()){
        //     if(nums[i] == nums[j]){
        //         return true;
        //     }
        //     i++;
        //     j++;
        // }
        // return false;
    }
};

// was my previous solution, but ultimately very time-intensive as it loops through and set.contains has a runtime of O(log(n)) as it iterates like a balanced search tree
// ultimate runtime: O(nlog(n)) -- very unideal!