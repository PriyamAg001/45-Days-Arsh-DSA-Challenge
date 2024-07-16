Code:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=1; i<n; i++){
            if(nums[count] != nums[i]){
                count++;
                nums[count] = nums[i];
            }
        }
        return count + 1;
    }
};

TC: O(n)
SC: O(1)
