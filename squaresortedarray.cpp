// Square each number in the array and return the array in increasing order

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int index = right;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                squares[index--] = leftSquare;
                left++;
            } else {
                squares[index--] = rightSquare;
                right--;
            }
        }

        return squares;
    }
};
