class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Input: nums = [100,4,200,1,3,2]
        // Output: 4
        // Explanation: 
        // The longest consecutive elements sequence is [1, 2, 3, 4]. 
        // Therefore its length is 4.
        std::vector<int>sort_nums = nums;
        std::sort(sort_nums.begin(), sort_nums.end());
        int n = nums.size();

        int largest_counter = 0;
        int counter = 1;

        for(int i = 0; i < n; i++){
            //if (i == 0) continue;
            if (counter > largest_counter){
                largest_counter = counter;
            }
            
            if (sort_nums[i+1]-sort_nums[i] == 1){
                counter += 1;
            }else{
                counter = 1;
                continue;
            }
        }
        return largest_counter;

    }

}
