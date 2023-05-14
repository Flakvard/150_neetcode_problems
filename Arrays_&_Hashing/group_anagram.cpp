class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> groupedStrs;

        //Check if input value has only one or less string
        if(strs.size()<=1){
            groupedStrs.push_back(strs);
            return groupedStrs;
        }

        unordered_map<string, vector<string>> map;
        string str ="";

        for(auto x:strs){
            str = x;
            sort(begin(str),end(str)); // sort str 
            map[str].push_back(x); // map x to sorted str 
        }

        for(auto x:map){
            groupedStrs.push_back(x.second); // push the grouped sorted strs
        }
        return groupedStrs;

    }
};
