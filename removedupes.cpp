// Remove duplicate elements from array and return unique elements

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0, i = 1, j = nums.size() - 1, h = 1;
        while (i <= j) 
        {
            if (nums.at(i) == nums.at(k)) 
            {
                i++;
            } 
            else 
            {
                k++;
                nums.at(k) = nums.at(i);
                h++;
            }
        }
        return h;
    }
};
