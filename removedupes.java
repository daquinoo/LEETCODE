// Remove duplicate elements from array and return unique elements

class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 0, i = 1, j = nums.length - 1, h = 1;
        while (i <= j) 
        {
            if (nums[i] == nums[k])
            {
                i++;
            } 
            else 
            {
                k++;
                nums[k] = nums[i];
                h++;
            }
        }
        return h;
    }
}
