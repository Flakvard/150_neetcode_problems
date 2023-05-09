class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arrayNumber;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i==j){
                    break;
                }
                int targetNumber = nums[i]+nums[j];
                if(targetNumber == target ){
                    arrayNumber.push_back(i);
                    arrayNumber.push_back(j);
                    return arrayNumber;
                }
            }
        }
        return arrayNumber;
    }
};
