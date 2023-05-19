class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Input: nums = [1,2,3,4]
        // Output:nums = [24,12,8,6]
        // 
        // Dynamic programming (Tabulation)
        // 2*3*4 = 24
        // 1*3*4 = 12
        // 1*2*4 = 8
        // 1*2*3 = 6
        //
        // Left:
        // [0] = 1
        // [1] = 1 * 1
        // [2] = 2 * 1
        // [3] = 3 * 2
        //
        // Right:
        // [3] = 1
        // [2] = 1 * 1
        // [1] = 2 * 1
        // [0] = 3 * 2
        //

        int n = nums.size();
        std::vector<int>arr;
        std::vector<int>left[n]; // initilize vector size
        std::vector<int>right[n]; // init vector size

        left[0] = 1;
        for(int i = 1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }

        return arr;
    }
};
