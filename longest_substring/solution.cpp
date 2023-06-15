class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxSize=0,l=0,r=0;
        unordered_set<char> chars;
        while(r < s.size()){
            while(chars.find(s[r]) != chars.end()){
                chars.erase(s[l]);
                l++;
            }
            maxSize = max(maxSize, r - l + 1);
            chars.insert(s[r]); //means that it is a unique char
            r++;
        }
        return maxSize;
    }
};