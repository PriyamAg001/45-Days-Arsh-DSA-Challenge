Code:

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int firstColorCount = 0;
        int secondColorCount = 0;
        int thirdColorCount = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                firstColorCount++;
            }
            else if(nums[i] == 1){
                secondColorCount++;
            }
            else{
                thirdColorCount++;
            }
        }

        for(int i=0; i < firstColorCount; i++){
            nums[i] = 0;
        }
        for(int i = firstColorCount; i < firstColorCount + secondColorCount; i++){
            nums[i] = 1;
        }
        for(int i = firstColorCount + secondColorCount; i < firstColorCount + secondColorCount + thirdColorCount; i++){
            nums[i] = 2;
        }
    }
};

TC: O(n)
SC: O(1)
