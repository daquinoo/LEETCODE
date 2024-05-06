// Merge two sorted arrays in increasing order

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // checks nums1
        int j = n - 1; // checks nums2
        int k = m + n - 1; // starts from all the way at the end of nums1

        while (i >= 0 && j >= 0) 
        {
            if (nums1.at(i) > nums2.at(j)) 
            {
                nums1.at(k) = nums1.at(i);
                i--;
            } 
            else 
            {
                nums1.at(k) = nums2.at(j);
                j--;
            }
            k--;
        }

        // If there are remaining elements in nums2
        while (j >= 0) 
        {
            nums1.at(k) = nums2.at(j);
            j--;
            k--;
        }
    }
};
