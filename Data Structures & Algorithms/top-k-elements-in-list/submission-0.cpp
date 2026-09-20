class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mini;
        vector<int>ans;
        for(int x : nums){
            mp[x]++;
        }
        for(auto wala : mp){
            mini.push({wala.second,wala.first});
            if(mini.size()>k)
            mini.pop();
        }
        while(!mini.empty()){
            ans.push_back(mini.top().second);
            mini.pop();
        }
        return ans;
    }
};
