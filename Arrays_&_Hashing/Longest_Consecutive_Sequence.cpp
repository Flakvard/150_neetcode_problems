class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Input: nums = [100,4,200,1,3,2]
        // Output: 4
        // Explanation: 
        // The longest consecutive elements sequence is [1, 2, 3, 4]. 
        // Therefore its length is 4.
        using namespace std;
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());

        int largest_counter = 0;
        int counter = 1;

        for(int i = 1; i <= n; i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1){
                    counter++;
                }
                else{
                    largest_counter = max(largest_counter, counter);
                    counter = 1;
                }
            }
        }
        return max(largest_counter, counter);
    }
    

};
