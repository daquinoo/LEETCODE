// Find maximum number of consecutive ones in an array

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        int i = 0;
        while (!(i == nums.size()))
        {
            if (nums.at(i) == 1)
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
};
