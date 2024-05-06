class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int count = 0;
        int i = 0;
        while (i < nums.length)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                if (count > max)
                {
                    max = count;
                }
                count = 0;
            }
            i++;
        }
        if (count > max) {
            max = count;
        }
        return max;
    }
}
