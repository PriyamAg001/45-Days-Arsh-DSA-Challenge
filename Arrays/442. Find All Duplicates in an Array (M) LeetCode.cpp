Code:

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> duplicates;
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            if(st.find(nums[i]) != st.end()){
                duplicates.push_back(nums[i]);
            }
            else{
                st.insert(nums[i]);
            }
        }
        return duplicates; 
    }
};

TC: O(n)
SC: O(n)
