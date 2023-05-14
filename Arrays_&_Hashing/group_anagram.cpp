class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>strsGroupAnagram;
        vector<vector<string>>groupedStrs;
        string word1 = "";
        string word2 = "";

        if(strs.size()<=1){
            groupedStrs.push_back(strs);
            return groupedStrs;
        }
        
        // loop one word through all vector
        for(int i = 0; i < strs.size(); i++){ 
            word1 = strs[i]; // eat

            // compare one word with another word
            for(int j = i+1; j < strs.size(); i++){ 
                
                word2 = strs[j]; // tea
                if(word1.size()!=word2.size()) { // eat == tea
                    word1 = "";
                    word2 = "";
                    break;
                }


                for(int k = 0; k < word1.size(); k++){
                    for(int m = k+1; m < word1.size()-1; m++){
                        if(word1[k] == word2[m]){ //e !=t
                            strsGroupAnagram.push_back(word2);
                        }
                    }
                }
                strsGroupAnagram.push_back(word1);
                word2 = "";
            }
            word1 = "";
            groupedStrs.push_back(strsGroupAnagram);
        }
        return groupedStrs;
    }
};
