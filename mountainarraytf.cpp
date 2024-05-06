// Return true if given input array is a mountain array

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) {
            return false;
        }
        
        int i = 0;
        
        // Increasing phase
        while (i < n - 1 && arr[i] < arr[i + 1]) {
            i++;
        }
        
        // Peak cannot be the first or last element
        if (i == 0 || i == n - 1) {
            return false;
        }
        
        // Decreasing phase
        while (i < n - 1 && arr[i] > arr[i + 1]) {
            i++;
        }
        
        // Check if the array reached the end
        return i == n - 1; // returns false if either while loop (lines 10 and 20) is broken
    }
};
