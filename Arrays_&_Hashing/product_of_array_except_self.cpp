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

        int n = nums.size();
        std::vector<int>arr(n);  // initilize vector size
        std::vector<int>left(n); // init vector size
        std::vector<int>right(n);// init vector size

        // Left:
        // [0] = 1     = 1
        // [1] = 1 * 1 = 1
        // [2] = 2 * 1 = 2
        // [3] = 3 * 2 = 6
        //
        left[0] = 1;
        for(int i = 1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }

        // Right:
        // [0] = 12 * 2 = 24
        // [1] = 4  * 3 = 12
        // [2] = 1  * 4 = 4
        // [3] = 1      = 1
        //
        right[n-1] = 1;
        for(int i = n-2; i >= 0; i--){
            right[i] = right[i+1] * nums[i+1];
        }

        // Return:
        // [0] = 1 * 24  = 24
        // [1] = 1 * 12 = 12
        // [2] = 2 * 4 = 8
        // [3] = 6 * 1 = 6
        //
        for(int i = 0; i < n; i++){
            arr[i]= right[i]*left[i];
        }

        return arr;
    }
};
