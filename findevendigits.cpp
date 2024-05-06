// Find numbers with even amount of digits in array

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int digits = 0;
        for (int i=0; i<nums.size(); i++)
        {
            int num = nums.at(i);
            int digits = 0;
            while (num >= 10)
            {
                num /= 10;
                digits++;
            }
            if (num > 0)
            {
                digits++;
            }
            if (digits %2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};
