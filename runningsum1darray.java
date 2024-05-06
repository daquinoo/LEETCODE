class Solution {
    public int[] runningSum(int[] nums) {
        int sum = nums[0];
        int i=1;
        while (i<nums.length)
        {
            sum += nums[i];
            nums[i] = sum;
            i++;
        }
        return nums;
    }
}
