class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0, maxCount=0, maxSize=0;
        unordered_map<char, int> countMap;
        while(r < s.size()){
            //note that k is the max number of times the operation can be changed
            countMap[s[r]]++;
            //difference that the least often occurring char is replaced is char - max ct
            maxCount = max(maxCount, countMap[s[r]]);
            if(r - l + 1 - maxCount > k){
                countMap[s[l]]--;
                l++;
            }
            maxSize = max(maxSize, r - l + 1);
            r++;
        }
        return maxSize;
    }
};