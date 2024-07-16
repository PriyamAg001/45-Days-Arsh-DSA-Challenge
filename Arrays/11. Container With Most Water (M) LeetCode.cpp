Code:

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int max = 0;
        int result;

        while(left < right){
            if(height[left] > height[right]){
                result = height[right];
            }
            else{
                result = height[left];
            }

            result = (right - left) * result;
            if(result > max){
                max = result;
            }

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max;
    }
};

TC: O(n)
SC: O(1)
