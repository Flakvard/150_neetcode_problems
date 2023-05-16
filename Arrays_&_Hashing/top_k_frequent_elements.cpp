#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int>mp; // key values and counts of values

        std::priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
        //Use greater<> to change `pq` into a min heap priority queue
        //Pair/tuple the values in a vector to push from map counts
        
  
        for(int num:nums){
            mp[num]++; // add num as a key value and count each key value
        }
        for(auto count:mp){
            q.push({count.second, count.first}); 
            // push second val(lowest counts) as first priority in queue
            if(q.size() > k) q.pop(); // remove top count(lowest) when above k
        }

        vector<int>topKfrequent;
        
        while(k--){
            topKfrequent.push_back(q.top().second); 
            // push top second val(key value, not counts) 
            q.pop(); // remove top value
        }

        return topKfrequent;
        
    }
};
