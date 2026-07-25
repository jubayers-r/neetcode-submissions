class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        

        vector<int> sortedNums = nums;
        std::sort(sortedNums.begin(), sortedNums.end());
        // std::sort(nums.begin(), nums.end());
        
        if(nums.size() == 0) return 0;
        int count = 1;
        int max_count = 1;

  
        for(int  i= 0; i < nums.size() - 1; i++){

            if(sortedNums[i + 1] == sortedNums[i] + 1){
                count++;
            }  
            else if(sortedNums[i+1] == sortedNums[i]){
            // duplicate — just skip, don't reset
            }
            else {
                max_count = max(max_count, count);
                count = 1;
            }

        }
         max_count = max(max_count, count);
        return max_count;
    }
};
