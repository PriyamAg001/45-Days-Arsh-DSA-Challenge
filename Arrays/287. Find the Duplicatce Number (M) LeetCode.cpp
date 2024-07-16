Code:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        for(int i=0; i<n-1; i++){ // According to Question
            if(nums[i] == nums[i+1]){
                ans = nums[i];
            }
        }
        return ans;
    }
};

TC: O(N log N)
SC: O(n)
