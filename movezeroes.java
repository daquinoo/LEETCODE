// move all 0's to the end of nums while maintaining the relative order of the non-zero elements

class Solution {
    public void moveZeroes(int[] nums) {
        int insert = 0;

        for (int num : nums) {
            if (num != 0) {
                nums[insert++] = num;
            }
        }
        while (insert < nums.length) {
            nums[insert++] = 0;
        }
    }
}
