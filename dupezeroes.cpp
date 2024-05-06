// Duplicate each zero instance in the array, shifting pre-existing elements one unit to the right. 

// Note that elements shifted past the original array length are not written.

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for (int i=0; i<arr.size()-1; i++)
        {
            if (arr.at(i) == 0)
            {
                for (int j=arr.size()-1; j>i; j--)
                {
                    arr.at(j) = arr.at(j-1);
                }
                i++;
            }
        }
    }
};
