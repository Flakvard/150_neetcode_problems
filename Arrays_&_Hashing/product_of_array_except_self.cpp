class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Input: nums = [1,2,3,4]
        // Output:nums = [24,12,8,6]
        // 2*3*4 = 24
        // 1*3*4 = 12
        // 1*2*4 = 8
        // 1*2*3 = 6

        int n = nums.size();
        std::vector<int>arr;
        std::priority_queue<int, std::vector<int>>pg;
        std::vector<int>res;

        for(int i = 0; i < n; i++){
            for(int j=0; j < n; j++){
                if(i==j){

                }else{
                    int newNum = nums[j]; 
                    pg.push(newNum);
                }
            }
            int arrSize = pg.size();
            int sum = 1;

            for(int k=0; k < arrSize; k++){
                sum *= pg.top();
                pg.pop();
            }
            arr.push_back(sum);
        }
        return arr;
    }
};
