#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map <int,vector<int>> mp;
        for(auto x:nums){
            int i = x;
            mp[i].push_back(x);
        }
        vector<int> topKfrequent;
        int top = k;
        sort(mp.begin(),mp.end());
        
        for(int i = 0; i < k; i++){
            topKfrequent.push_back(mp[i]);
        }

        return topKfrequent;
        
    }
};
