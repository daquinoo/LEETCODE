// Remove given val from integer array nums in-place, and return number of elements != val

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, i = 0, j = nums.size() - 1;
        while (i <= j) 
        {
            if (nums.at(i) == val) 
            {
                nums.at(i) = nums.at(j);
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
};
