class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> mp;
        std::priority_queue<vector<int>,vector<vector<int>>, greater<vector<int>>> priorityQueue;
        for(auto &num: nums){
            mp[num]++;
        }
        for(auto &kp: mp){
            priorityQueue.push({kp.second,kp.first});
            if(priorityQueue.size()>k){
                priorityQueue.pop();
            }
        }
        vector<int> ans;
        while(!priorityQueue.empty()){
            ans.push_back(priorityQueue.top()[1]);
            priorityQueue.pop();
        }
        return ans;
    }
};

//establish min PQ with size k; pop if it gets larger