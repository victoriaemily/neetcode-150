class Solution {
public:
    //time efficient implementation
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::unordered_map<int, int> numsMap;
        int i = 0;
        for(auto& num: numbers){
            if(numsMap.count(target-num)){
                return {numsMap[target-num] + 1, i + 1};
            }
            else {
                numsMap[num] = i; //store index of number
            }
            i++;
        }
        return {};
    }
};

//memory efficient implementation - use two pointers

class Solution {
public:
    //time efficient implementation
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while( i < j ){
            if(numbers[i] + numbers[j] == target){
                return {i + 1, j + 1};
            }
            else if(numbers[i] + numbers[j] < target){
                i++;
            }
            else{
                j--;
            }
        }
    }
};