class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int currSequence = 1;
        int longestSequence = 0;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){//if the numbers are not equal
                if(nums[i] == nums[i-1] + 1){
                    currSequence++;
                }
                else{
                    longestSequence = max(longestSequence, currSequence);
                    currSequence = 1;
                }
            }
        }
        return max(longestSequence, currSequence);
    }
};