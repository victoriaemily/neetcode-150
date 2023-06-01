class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        if(s.size() != t.size()) return false;
        if(s == t){
            return true;
        }
        return false;
    }

//space complexity is O(1) as std::sort is done in place
//runtime complexity is O(nlog(n)) as std::sort is O(nlog(n)) and the rest of the operations are O(1)


//more time efficient solution utilizes a hash array

bool isAnagramAlt(string s, string t) {
        if(s.size() == t.size()){
            int arrS[26] = {0};
            int arrT[26] = {0};
            for(int i=0; i<s.size(); i++){
                arrS[s[i] - 'a']++;
                arrT[t[i] - 'a']++;
            }
            bool flag = true;
            for(int i=0; i<26; i++){
                if(arrS[i] != arrT[i]){
                    return flag;
                }
            }
            return flag;
        }
        else return false;
    }

    };
