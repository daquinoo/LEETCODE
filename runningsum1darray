// C++
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = nums.at(0);
        int i = 1;
        while (i < nums.size())
        {
            sum += nums.at(i);
            nums.at(i) = sum;
            i++;
        }
        return nums;
    }
};
