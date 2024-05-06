// Sort array by parity (even first odd last)

class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int insert = 0;
        for (int i=0; i<nums.length; i++) {
            if (nums[i]%2 == 0) {
                int hold = nums[insert];
                nums[insert] = nums[i];
                nums[i] = hold;
                insert++;
            }
        }
        return nums;
    }
}
