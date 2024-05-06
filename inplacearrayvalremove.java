// Remove given val from integer array nums in-place, and return number of elements != val

class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0, i = 0, j = nums.length - 1;
        while (i <= j) 
        {
            if (nums[i] == val) 
            {
                nums[i] = nums[j];
                j--;
            } 
            else 
            {
                i++;
                k++;
            }
        }
        return k;
    }
}
